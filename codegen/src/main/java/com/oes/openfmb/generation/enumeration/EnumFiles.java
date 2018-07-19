package com.oes.openfmb.generation.enumeration;

import com.oes.openfmb.generation.document.*;
import jdk.nashorn.internal.ir.annotations.Immutable;

import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Optional;

import static com.oes.openfmb.generation.document.Document.*;

public class EnumFiles implements CppFileCollection {

    private final Enumeration enumeration;
    private final Path includePath;
    private final FileName name;
    private final List<String> namespaces;


    EnumFiles(Enumeration enumeration, Path includePath, List<String> namespaces) {
        this.enumeration = enumeration;
        this.includePath = includePath;
        this.name = new FileName(enumeration.name);
        this.namespaces = namespaces;
        Collections.reverse(namespaces);
    }

    EnumFiles(Enumeration enumeration, List<String> namespaces) {
        this(enumeration, null, namespaces);
    }

    @Override
    public List<CppFile> headers() {
        return name.createHeaderList(
                () -> join(
                        FileHeader.lines,
                        guards(
                             enumeration.name,
                             line("#include <string>"),
                             line("#include <array>"),
                             space,
                             namespaced(
                                     line("struct %s", enumeration.name).bracketSemicolon(
                                             getEnumDefinition(),
                                             space,
                                             join(enumeration.values.stream().map(entry -> line("static const char %s[];", entry.label))),
                                             space,
                                             line("static const std::array<Value, %d> values;", this.enumeration.values.size()),
                                             space,
                                             line("static std::string to_string(Value value);"),
                                             line("static Value from_string(const std::string& name);")
                                     )
                             )
                        )
                )
        );
    }

    @Override
    public List<CppFile> implementations() {
        return name.createImplementationList(
                () -> join(
                        FileHeader.lines,
                        (this.includePath == null) ? include(this.name.getHeaderName()) : include(this.includePath.resolve(this.name.getHeaderName()).toString()),
                        space,
                        include("adapter-api/util/Exception.h"),
                        space,
                        line("#include <map>"),
                        space,
                        namespaced(
                                spaced(
                                        join(this.enumeration.values.stream().map(entry -> line("const char %s::%s[] = \"%s\";", this.enumeration.name, entry.label, entry.label))),
                                        getValuesDefinitions(),
                                        getToStringMethod(),
                                        getFromStringMethod()
                                )
                        )

                )
        );
    }

    private Document getValuesDefinitions()
    {
        return line("const std::array<%s::Value, %d> %s::values =", this.enumeration.name, this.enumeration.values.size(), this.enumeration.name).bracketSemicolon(
                join(this.enumeration.values.stream().map(entry -> line("%s::Value::%s,", this.enumeration.name, entry.label)))
        );
    }

    private Document getToStringMethod()
    {
        final List<Document> switchLines = new ArrayList<>();
        for(int i = 0; i < this.enumeration.values.size(); ++i)
        {
            final String name = this.enumeration.values.get(i).label;
            if((i + 1) < this.enumeration.values.size()) {
                switchLines.add(line("case(Value::%s): return %s;", name, name));
            }
            else
            {
                switchLines.add(line("default: return %s;", name));
            }
        }

        return line("std::string %s::to_string(%s::Value value)", this.name.baseName, this.name.baseName).bracket(
                line("switch(value)").bracket(
                        join(switchLines.stream())
                )
        );
    }

    private Document getFromStringMethod()
    {
        return line("%s::Value %s::from_string(const std::string& name)", this.name.baseName, this.name.baseName).bracket(
                line("static const std::map<std::string, Value> map = ").bracketSemicolon(
                        join(this.enumeration.values.stream().map(entry -> line("{%s, Value::%s},", entry.label, entry.label)))
                ).then(
                        join(
                                line("const auto elem = map.find(name);"),
                                line("if(elem == map.end()) throw Exception(\"Unknown value name '\", name, \"' for enum %s\");", this.enumeration.name),
                                line("return elem->second;")
                        )
                )
        );
    }

    private Document getEnumDefinition()
    {
        return line("enum class Value").bracketSemicolon(
                join(enumeration.values.stream().map(
                        entry -> lines(
                                "// " + entry.comment,
                                entry.label + ","
                        )
                ))
        );
    }

    private Document namespaced(Document...inner)
    {
        Document current = join(inner);
        for(String namespace : this.namespaces)
        {
            current = Document.namespace(namespace, current);
        }
        return current;
    }


}

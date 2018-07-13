package com.oes.openfmb.generation.enumeration;

import com.oes.openfmb.generation.document.*;
import jdk.nashorn.internal.ir.annotations.Immutable;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

import static com.oes.openfmb.generation.document.Document.*;

public class EnumFiles implements CppFileCollection {

    private final Enumeration enumeration;
    private final FileName name;
    private final List<String> namespaces;


    EnumFiles(Enumeration enumeration, List<String> namespaces) {
        this.enumeration = enumeration;
        this.name = new FileName(enumeration.name);
        this.namespaces = namespaces;
        Collections.reverse(namespaces);
    }

    @Override
    public List<CppFile> headers() {
        return name.createHeaderList(
                () -> join(
                        FileHeader.lines,
                        guards(
                             enumeration.name,
                             line("#include <string>"),
                             space,
                             namespaced(
                                     line("struct %s", enumeration.name).bracketSemicolon(
                                             getEnumDefinition(),
                                             space,
                                             join(enumeration.values.stream().map(v -> line("static constexpr const char* const %s = \"%s\";", v, v))),
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
                        include(this.name.getHeaderName()),
                        space,
                        include("adapter-api/util/Exception.h"),
                        space,
                        line("#include <map>"),
                        space,
                        namespaced(
                                spaced(
                                        getToStringMethod(),
                                        getFromStringMethod()
                                )
                        )

                )
        );
    }

    private Document getToStringMethod()
    {
        final List<Document> switchLines = new ArrayList<>();
        for(int i = 0; i < this.enumeration.values.size(); ++i)
        {
            final String value = this.enumeration.values.get(i);
            if((i + 1) < this.enumeration.values.size()) {
                switchLines.add(line("case(Value::%s): return %s;", value, value));
            }
            else
            {
                switchLines.add(line("default: return %s;", value));
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
                        join(this.enumeration.values.stream().map(v -> line("{%s, Value::%s},", v, v)))
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
                join(enumeration.values.stream().map(v -> line(v+",")))
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

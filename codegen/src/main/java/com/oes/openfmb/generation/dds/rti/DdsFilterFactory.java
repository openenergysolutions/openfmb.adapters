package com.oes.openfmb.generation.dds.rti;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.Includes;
import com.oes.openfmb.generation.document.CppFile;
import com.oes.openfmb.generation.document.CppFileCollection;
import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.FileHeader;
import com.oes.openfmb.generation.proto.TypeClassification.FieldPath;
import openfmb.commonmodule.ConductingEquipment;

import java.util.Collections;
import java.util.List;
import java.util.Optional;
import java.util.StringJoiner;

import static com.oes.openfmb.generation.document.Document.*;

public class DdsFilterFactory implements CppFileCollection {

    private final List<Descriptors.Descriptor> profiles;

    DdsFilterFactory(List<Descriptors.Descriptor> profiles) {
        this.profiles = profiles;
    }

    @Override
    public List<CppFile> headers() {
        return Collections.singletonList(
                new CppFile(
                        "DdsFilterFactory.h",
                        () -> join(
                                FileHeader.lines,
                                guards("DdsFilterFactory",
                                        headerIncludes(),
                                        space,
                                        namespace("adapter",
                                                namespace("dds",
                                                        namespace("rti",
                                                                template(),
                                                                space,
                                                                methods()
                                                        )
                                                )
                                        )
                                )
                        )
                )
        );
    }

    private Document headerIncludes()
    {
        return spaced(
                line("#include <string>"),
                join(Includes.getIncludeFiles(this.profiles).stream().map(Document::include))
        );
    }

    private Document template()
    {
        return lines(
                "template<typename T>",
                "struct DdsFilterFactory;"
        );
    }

    private Document methods()
    {
        return spaced(
                this.profiles.stream().map(this::method)
        );
    }

    private Document method(Descriptors.Descriptor profile)
    {
        String path = getPath(profile);
        return line("template<>")
                .then(String.format("struct DdsFilterFactory<%s>", RtiHelpers.getDDSName(profile)))
                .bracketSemicolon(
                        line(String.format("static std::string build(const std::string& mRID)"))
                                .bracket(
                                        line(String.format("return std::string{\"%s\"} + \" = \" + mRID;", path))
                                )
                );
    }

    private String getPath(Descriptors.Descriptor profile)
    {
        for(Descriptors.FieldDescriptor field : profile.getFields())
        {
            Optional<String> result = getPathRecursive(FieldPath.create(field), field);
            if(result.isPresent())
            {
                return result.get();
            }
        }

        throw new RuntimeException(String.format("Could not find mRID in %s", profile.getFullName()));
    }

    private Optional<String> getPathRecursive(FieldPath path, Descriptors.FieldDescriptor field)
    {
        if(path.matches("mRID", ConductingEquipment.getDescriptor())) {
            StringJoiner joiner = new StringJoiner(".");
            for(Descriptors.FieldDescriptor pathField : path.path)
            {
                joiner.add(pathField.getName());
            }
            return Optional.of(joiner.toString());
        }
        else if(path.last().getType() == Descriptors.FieldDescriptor.Type.MESSAGE)
        {
            for(Descriptors.FieldDescriptor childField : field.getMessageType().getFields())
            {
                   Optional<String> result = getPathRecursive(path.build(childField), childField);
                   if(result.isPresent())
                   {
                       return result;
                   }
            }
            return Optional.empty();
        }
        else
        {
            return Optional.empty();
        }
    }

    @Override
    public List<CppFile> implementations()
    {
        return Collections.emptyList();
    }
}

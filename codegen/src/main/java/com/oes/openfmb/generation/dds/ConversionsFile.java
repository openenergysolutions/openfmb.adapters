package com.oes.openfmb.generation.dds;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.document.CppClassFile;
import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.Documents;
import com.oes.openfmb.generation.document.FileHeader;
import com.oes.openfmb.util.DescriptorUtil;
import openfmb.resourcemodule.ResourceReadingProfile;

import java.util.Arrays;
import java.util.List;
import java.util.Set;
import java.util.stream.Collectors;

import static com.oes.openfmb.generation.document.Documents.*;

public class ConversionsFile implements CppClassFile {

    private final String className;
    private final Set<Descriptors.Descriptor> descriptors;

    public ConversionsFile(String baseFileName) {
        this.className = baseFileName;
        this.descriptors = buildDescriptorSet();
    }

    private static Set<Descriptors.Descriptor> buildDescriptorSet()
    {
        List<Descriptors.Descriptor> descriptors = Arrays.asList(
                ResourceReadingProfile.getDescriptor()
        );

        return descriptors.stream().map(DescriptorUtil::findUniqueSubMessages).flatMap(Set::stream).collect(Collectors.toSet());
    }


    @Override
    public Document header() {
        return Documents.join(
                FileHeader.lines,
                guards(this.className,
                        headerIncludes(),
                        space,
                        Documents.namespace(
                                "adapter",
                                namespace("dds",
                                    signatures()
                                )
                        )
                )
        );
    }

    @Override
    public Document implementation() {
        return Documents.join(
                FileHeader.lines,
                include(this.className + ".h"),
                space,
                namespace("adapter",
                        namespace("dds",
                            helpers(),
                            space,
                            implementations()
                        )
                )
        );
    }

    private Document headerIncludes()
    {
       return spaced(
               include("adapter-api/proto/resourcemodule/resourcemodule.pb.h"),
               include("OpenFMB-3.0.0TypeSupport.hh")
       );

    }

    private Document signatures()
    {
        return spaced(
                descriptors.stream().map(d -> line(String.format("void convert(const %s&, openfmb::%s&);", cppName(d), cppName(d))))
        );

    }

    private Document helpers()
    {
        return line("template <class T, class R>")
                .append("R* create(const T& value)")
                .append("{")
                .indent(
                      lines(
                              "auto ret = new R();",
                              "convert(value, *ret);",
                              "return ret;"
                      )
                )
                .append("};");
    }

    private Document implementations()
    {
        return spaced(descriptors.stream().map(d -> implementation(d)));
    }

    private Document implementation(Descriptors.Descriptor d)
    {
        return line(String.format("void convert(const %s& in, openfmb::%s& out)", cppName(d), cppName(d)))
                .append("{")
                .indent(
                        join(
                                line("out.clear();"),
                                Documents.space,
                                messageFieldConversions(d)
                        )
                )
                .append("}");

    }

    private Document messageFieldConversions(Descriptors.Descriptor d)
    {
        return join(
          d.getFields().stream().map(this::messageFieldConversion)
        );
    }

    private Document messageFieldConversion(Descriptors.FieldDescriptor field)
    {
        if(field.getType() != Descriptors.FieldDescriptor.Type.MESSAGE) return Documents.empty;

        if(field.isRequired())
        {
            return line(String.format("convert(in.%s, out.%s", field.getName(), field.getName()));
        }
        else
        {
            return line(
                    String.format(
                            "if(in.has_%s()) out.%s = create<%s,openfmb::%s>(in.%s());",
                            field.getName().toLowerCase(),
                            field.getName(),
                            cppName(field.getMessageType()),
                            cppName(field.getMessageType()),
                            field.getName().toLowerCase()
                    )
            );
        }
    }

    private String cppName(Descriptors.Descriptor d)
    {
        return d.getFullName().replace(".", "::");
    }
}

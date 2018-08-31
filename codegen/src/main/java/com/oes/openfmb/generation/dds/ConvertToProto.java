package com.oes.openfmb.generation.dds;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.Includes;
import com.oes.openfmb.generation.document.CppFile;
import com.oes.openfmb.generation.document.CppFileCollection;
import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.FileHeader;

import java.util.Collections;
import java.util.List;
import java.util.stream.Collectors;

import static com.oes.openfmb.generation.document.Document.*;

public class ConvertToProto implements CppFileCollection {

    private final List<Descriptors.Descriptor> profiles;

    ConvertToProto(List<Descriptors.Descriptor> profiles) {
        this.profiles = profiles;
    }

    @Override
    public List<CppFile> headers() {
        return Collections.singletonList(
               new CppFile(
                       "ConvertToProto.h",
                       () -> join(
                               FileHeader.lines,
                               guards("ConvertToProto",
                                       headerIncludes(),
                                       space,
                                       namespace(
                                               "adapter",
                                               namespace("dds",
                                                       signatures()
                                               )
                                       )
                               )
                       )
               )
        );
    }

    @Override
    public List<CppFile> implementations() {
        return Collections.singletonList(
                new CppFile(
                        "ConvertToProto.cpp",
                        () -> join(
                                FileHeader.lines,
                                include("ConvertToProto.h"),
                                space,
                                include("../ConvertToProtoHelpers.h"),
                                space,
                                namespace("adapter",
                                        namespace("dds",
                                                convertImplementations()
                                        )
                                )
                        )
                )
        );
    }

    private Document convertImplementations()
    {
        return spaced(this.profiles.stream().map(this::implementation));
    }

    private Document implementation(Descriptors.Descriptor d)
    {
        return line(signature((d)))
                .then("{")
                .indent(
                        FieldInfo.omitConversion(d) ? line("// omitted via configuration") : join(
                                line("out.Clear();"),
                                messageFieldConversions(d),
                                primitiveFieldConversions(d)
                        )
                )
                .then("}");

    }


    private Document messageFieldConversions(Descriptors.Descriptor d)
    {
        Document conversions = join(
                d.getFields().stream().map(this::messageFieldConversion)
        );

        return conversions.isEmpty() ? conversions : line("// convert message fields").then(conversions);
    }

    private Document primitiveFieldConversions(Descriptors.Descriptor d) {

        Document conversions = join(
                d.getFields().stream().map(this::primitiveFieldConversion)
        );

        return conversions.isEmpty() ? conversions : line("// convert primitive fields").then(conversions);
    }

    private Document primitiveFieldConversion(Descriptors.FieldDescriptor field)
    {
        if(field.getType() == Descriptors.FieldDescriptor.Type.MESSAGE) return Document.empty;

        if(field.getType() == Descriptors.FieldDescriptor.Type.BYTES)
        {
            return line(String.format("// TODO - field '%s' of type 'bytes' omitted", field.getName()));
        }

        if(FieldInfo.isRequired(field))
        {
            if(field.getType().equals(Descriptors.FieldDescriptor.Type.STRING))
            {
                return line(
                        String.format("if(in.%s) out.set_%s(convert_%s(in.%s));",
                                field.getName(),
                                field.getName().toLowerCase(),
                                field.getType().toString().toLowerCase(),
                                field.getName()
                        )
                );
            }
            else
            {
                return line(
                        String.format("out.set_%s(convert_%s(in.%s));",
                                field.getName().toLowerCase(),
                                field.getType().toString().toLowerCase(),
                                field.getName()
                        )
                );
            }
        }
        else
        {
            if(field.getType().equals(Descriptors.FieldDescriptor.Type.STRING))
            {
                return line(
                        String.format(
                                "if(in.%s) out.set_%s(in.%s);",
                                field.getName(),
                                field.getName().toLowerCase(),
                                field.getName()
                        )
                );
            }
            else
            {
                return line(
                        String.format(
                                "if(in.%s) out.set_%s(convert_%s(*in.%s));",
                                field.getName(),
                                field.getName().toLowerCase(),
                                field.getType().toString().toLowerCase(),
                                field.getName()
                        )
                );
            }
        }

    }

    private Document messageFieldConversion(Descriptors.FieldDescriptor field)
    {
        if(field.getType() != Descriptors.FieldDescriptor.Type.MESSAGE) return Document.empty;

        if(FieldInfo.isInherited(field))
        {
            return line(
                    String.format(
                            "convert_to_proto(in, *out.mutable_%s()); // inherited type",
                            field.getName().toLowerCase()
                    )
            );
        }
        else
        {
            if(field.isRepeated())
            {
                return line(
                        String.format(
                                "convert_repeated_field(in.%s, *out.mutable_%s()); // repeated field",
                                field.getName(),
                                field.getName().toLowerCase()
                        )
                );
            }
            else
            {
                if(FieldInfo.isRequired(field))
                {
                    return line(
                            String.format(
                                    "convert_to_proto(in.%s, *out.mutable_%s()); // required field in DDS",
                                    field.getName(),
                                    field.getName().toLowerCase()
                            )
                    );
                }
                else
                {
                    return line(
                            String.format(
                                    "if(in.%s) convert_to_proto(*in.%s, *out.mutable_%s());",
                                    field.getName(),
                                    field.getName(),
                                    field.getName().toLowerCase()
                            )
                    );
                }
            }

        }
    }

    private Document headerIncludes()
    {
       return join(
               Includes.getIncludeFiles(this.profiles).stream().map(Document::include)
       ).then(
               join(
                   space,
                   include("OpenFMB-3.0.0TypeSupport.hh")
               )
       );

    }

    private Document signatures() {
        return spaced(
                this.profiles.stream().map(d -> line(signature(d) + ";"))
        );

    }

    private static String signature(Descriptors.Descriptor d)
    {
        return String.format("void convert_to_proto(const %s& in, %s& out)", Helpers.getDDSName(d), Helpers.getProtoName(d));
    }

}

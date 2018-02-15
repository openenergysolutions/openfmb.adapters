package com.oes.openfmb.generation.dds;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.document.CppFilePair;
import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.Documents;
import com.oes.openfmb.generation.document.FileHeader;
import com.oes.openfmb.util.DescriptorUtil;
import openfmb.breakermodule.BreakerReadingProfile;
import openfmb.resourcemodule.ResourceReadingProfile;

import java.util.Arrays;
import java.util.List;
import java.util.Set;
import java.util.stream.Collectors;

import static com.oes.openfmb.generation.document.Documents.*;

public class ConvertToProto extends CppFilePair {

    public ConvertToProto() {

    }

    @Override
    protected String baseFileName() {
        return "ConvertToProto";
    }

    @Override
    public Document header() {
        return Documents.join(
                FileHeader.lines,
                guards(this.baseFileName(),
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
                include(this.baseFileName() + ".h"),
                space,
                include("../ConvertToProtoHelpers.h"),
                space,
                namespace("adapter",
                        namespace("dds",
                                implementations()
                        )
                )
        );
    }

    private Document implementations()
    {
        return spaced(Profiles.getDescriptors().map(this::implementation));
    }

    private Document implementation(Descriptors.Descriptor d)
    {
        return line(signature((d)))
                .append("{")
                .indent(
                        FieldInfo.omitConversion(d) ? line("// omitted via configuration") : join(
                                line("out.Clear();"),
                                messageFieldConversions(d),
                                primitiveFieldConversions(d)
                        )
                )
                .append("}");

    }


    private Document messageFieldConversions(Descriptors.Descriptor d)
    {
        Document conversions = join(
                d.getFields().stream().map(this::messageFieldConversion)
        );

        return conversions.isEmpty() ? conversions : line("// convert message fields").append(conversions);
    }

    private Document primitiveFieldConversions(Descriptors.Descriptor d) {

        Document conversions = join(
                d.getFields().stream().map(this::primitiveFieldConversion)
        );

        return conversions.isEmpty() ? conversions : line("// convert primitive fields").append(conversions);
    }

    private Document primitiveFieldConversion(Descriptors.FieldDescriptor field)
    {
        if(field.getType() == Descriptors.FieldDescriptor.Type.MESSAGE) return Documents.empty;

        if(field.getType() == Descriptors.FieldDescriptor.Type.BYTES)
        {
            return line(String.format("// omitting 'bytes' field called %s", field.getName()));
        }

        if(FieldInfo.isRequired(field))
        {
            return line(
                    String.format("out.set_%s(convert_%s(in.%s));",
                            field.getName().toLowerCase(),
                            field.getType().toString().toLowerCase(),
                            field.getName()
                    )
            );
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
        if(field.getType() != Descriptors.FieldDescriptor.Type.MESSAGE) return Documents.empty;

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
                   include("adapter-api/proto/resourcemodule/resourcemodule.pb.h"),
                   include("adapter-api/proto/breakermodule/breakermodule.pb.h")
       ).append(
               join(
                   space,
                   include("OpenFMB-3.0.0TypeSupport.hh")
               )
       );

    }

    private Document signatures() {
        return spaced(
                Profiles.getDescriptors().map(d -> line(signature(d) + ";"))
        );

    }

    private static String signature(Descriptors.Descriptor d)
    {
        return String.format("void convert_to_proto(const openfmb::%s& in, %s& out)", cppName(d), cppName(d));
    }

    private static String cppName(Descriptors.Descriptor d)
    {
        return d.getFullName().replace(".", "::");
    }
}

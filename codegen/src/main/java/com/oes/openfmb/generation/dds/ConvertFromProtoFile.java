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

public class ConvertFromProtoFile extends CppFilePair {

    private final Set<Descriptors.Descriptor> descriptors;
    private final Set<Descriptors.EnumDescriptor> enums;
    private static final String baseFileName = "ConvertFromProto";

    public ConvertFromProtoFile() {

        List<Descriptors.Descriptor> types = Arrays.asList(
                ResourceReadingProfile.getDescriptor(),
                BreakerReadingProfile.getDescriptor()
        );

        this.descriptors = buildDescriptorSet(types);
        this.enums = buildEnumSet(types);
    }

    private static Set<Descriptors.Descriptor> buildDescriptorSet(List<Descriptors.Descriptor> descriptors)
    {
        return descriptors.stream().map(DescriptorUtil::findUniqueSubMessages).flatMap(Set::stream).collect(Collectors.toSet());
    }

    private static Set<Descriptors.EnumDescriptor> buildEnumSet(List<Descriptors.Descriptor> descriptors)
    {
        return descriptors.stream().map(DescriptorUtil::findUniqueEnums).flatMap(Set::stream).collect(Collectors.toSet());
    }


    @Override
    protected String baseFileName() {
        return baseFileName;
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
                include("../ConvertFromProtoHelpers.h"),
                space,
                namespace("adapter",
                        namespace("dds",
                            implementations(),
                            space,
                            enumAssertions()
                        )
                )
        );
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

    private Document signatures()
    {
        return spaced(
                descriptors.stream().map(d -> line(signature(d)+";"))
        );

    }

    private Document enumAssertions()
    {
        return Documents.spaced(this.enums.stream().map(ed -> assertion(ed)));
    }

    private static Document assertion(Descriptors.EnumDescriptor descriptor)
    {
        return Documents.join(
                descriptor.getValues().stream().map(v -> assertion(v))
        );
    }

    private static Document assertion(Descriptors.EnumValueDescriptor d)
    {
        // proto 3 requires that things begin w/ value of zero
        // some enum values don't actually exist in the UML
        if(d.getNumber() == 0 &&  d.getName().endsWith("_UNDEFINED"))
        {
            return Documents.empty;
        }

        return line(
            String.format("static_assert(static_cast<int>(%s::%s) == static_cast<int>(openfmb::%s::%s), \"mismatched enum values\");",
                    cppName(d.getType()),
                    d.getName(),
                    cppName(d.getType()),
                    d.getName()
            )
        );
    }

    private Document implementations()
    {
        return spaced(descriptors.stream().map(d -> implementation(d)));
    }

    private Document implementation(Descriptors.Descriptor d)
    {

        return line(signature((d)))
                .append("{")
                .indent(
                        FieldInfo.omitConversion(d) ? line("// omitted via configuration") : join(
                                line("out.clear();"),
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

        if(FieldInfo.isRequired(field))
        {
            return line(
                    String.format("out.%s = convert_%s(in.%s());",
                            field.getName(),
                            field.getType().toString().toLowerCase(),
                            field.getName().toLowerCase()
                    )
            );
        }
        else
        {
            return line(
                    String.format(
                            "out.%s = create_%s(in.%s());",
                            field.getName(),
                            field.getType().toString().toLowerCase(),
                            field.getName().toLowerCase()
                    )
            );
        }

    }

    private Document messageFieldConversion(Descriptors.FieldDescriptor field)
    {
        if(field.getType() != Descriptors.FieldDescriptor.Type.MESSAGE) return Documents.empty;


        if(FieldInfo.isInherited(field))
        {
            return line(
                    String.format(
                            "if(in.has_%s()) convert_from_proto(in.%s(), out); // inherited type",
                            field.getName().toLowerCase(),
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
                                "convert_repeated_field(in.%s(), out.%s); // repeated field",
                                field.getName().toLowerCase(),
                                field.getName()
                        )
                );
            }
            else
            {
                if(FieldInfo.isRequired(field))
                {
                    return line(
                            String.format(
                                    "convert_from_proto(in.%s(), out.%s); // required field in DDS",
                                    field.getName().toLowerCase(),
                                    field.getName()
                            )
                    );
                }
                else
                {
                    return line(
                            String.format(
                                    "if(in.has_%s()) out.%s = allocate_from_proto<openfmb::%s>(in.%s());",
                                    field.getName().toLowerCase(),
                                    field.getName(),
                                    cppName(field.getMessageType()),
                                    field.getName().toLowerCase()
                            )
                    );
                }
            }

        }
    }

    private static String signature(Descriptors.Descriptor d)
    {
        return String.format("void convert_from_proto(const %s& in, openfmb::%s& out)", cppName(d), cppName(d));
    }

    private static String cppName(Descriptors.EnumDescriptor d)
    {
        return d.getFullName().replace(".", "::");
    }

    private static String cppName(Descriptors.Descriptor d)
    {
        return d.getFullName().replace(".", "::");
    }
}

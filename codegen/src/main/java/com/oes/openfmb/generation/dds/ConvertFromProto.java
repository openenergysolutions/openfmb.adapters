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

public class ConvertFromProto implements CppFileCollection {

    private final List<Descriptors.Descriptor> profiles;

    ConvertFromProto(List<Descriptors.Descriptor> profiles) {
        this.profiles = profiles;
    }

    @Override
    public List<CppFile> headers() {
        return Collections.singletonList(
                new CppFile(
                        "ConvertFromProto.h",
                        () -> Document.join(
                                FileHeader.lines,
                                guards("ConvertFromProto",
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
                        "ConvertFromProto.cpp",
                        () -> join(
                                FileHeader.lines,
                                include("ConvertFromProto.h"),
                                space,
                                include("../ConvertFromProtoHelpers.h"),
                                space,
                                namespace("adapter",
                                        namespace("dds",
                                                convertImplementations(),
                                                space,
                                                enumAssertions()
                                        )
                                )
                        )
                )
        );
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

    private Document signatures()
    {
        return spaced(
                this.profiles.stream().map(d -> line(signature(d)+";"))
        );

    }

    private Document enumAssertions()
    {
        return spaced(Helpers.getEnumSet(this.profiles).stream().map(ed -> assertion(ed)));
    }

    private static Document assertion(Descriptors.EnumDescriptor descriptor)
    {
        return join(
                descriptor.getValues().stream().map(v -> assertion(v))
        );
    }

    private static Document assertion(Descriptors.EnumValueDescriptor d)
    {
        // proto 3 requires that things begin w/ value of zero
        // some enum values don't actually exist in the UML
        if(d.getNumber() == 0 &&  d.getName().endsWith("_UNDEFINED"))
        {
            return Document.empty;
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

    private Document convertImplementations()
    {
        return spaced(this.profiles.stream().map(d -> implementation(d)));
    }

    private Document implementation(Descriptors.Descriptor d)
    {

        return line(signature((d)))
                .then("{")
                .indent(
                        FieldInfo.omitConversion(d) ? line("// omitted via configuration") : join(
                                line("out.clear();"),
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
        if(field.getType() != Descriptors.FieldDescriptor.Type.MESSAGE) return Document.empty;


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
                                    "if(in.has_%s()) out.%s = allocate_from_proto<%s>(in.%s());",
                                    field.getName().toLowerCase(),
                                    field.getName(),
                                    Helpers.getDDSName(field.getMessageType()),
                                    field.getName().toLowerCase()
                            )
                    );
                }
            }

        }
    }

    private static String signature(Descriptors.Descriptor d)
    {
        return String.format("void convert_from_proto(const %s& in, %s& out)", Helpers.getProtoName(d), Helpers.getDDSName(d));
    }

    private static String cppName(Descriptors.EnumDescriptor d)
    {
        return d.getFullName().replace(".", "::");
    }

}

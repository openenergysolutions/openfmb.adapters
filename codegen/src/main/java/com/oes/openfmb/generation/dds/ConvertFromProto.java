package com.oes.openfmb.generation.dds;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.Includes;
import com.oes.openfmb.generation.document.CppFile;
import com.oes.openfmb.generation.document.CppFileCollection;
import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.FileHeader;

import java.util.Collection;
import java.util.Collections;
import java.util.List;
import java.util.Set;
import java.util.stream.Collectors;

import static com.oes.openfmb.generation.document.Document.*;

public class ConvertFromProto implements CppFileCollection {

    private final List<Descriptors.Descriptor> profiles;
    private final Set<Descriptors.Descriptor> children;

    ConvertFromProto(List<Descriptors.Descriptor> profiles) {
        this.profiles = profiles;
        this.children = Helpers.getChildDescriptors(profiles);
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
                                                        signatures(this.profiles)
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
                                                line("// ---- forward declare the conversion routines for the child types ---"),
                                                space,
                                                signatures(this.children),
                                                space,
                                                line("// ---- implement the top level profile conversion routines ---"),
                                                space,
                                                implementations(this.profiles),
                                                space,
                                                line("// ---- implement the conversion routines for the child types ---"),
                                                implementations(this.children),
                                                space,
                                                line("// ---- static assertions related to enums"),
                                                enumAssertions(this.profiles)
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
                   include("OpenFMB-3.0.0TypeSupport.hh"),
                   space,
                   include("../NamespaceAlias.h")
               )
       );

    }

    private static Document signatures(Collection<Descriptors.Descriptor> descriptors)
    {
        return spaced(
                descriptors.stream().map(d -> line(signature(d)+";"))
        );

    }

    private static Document enumAssertions(List<Descriptors.Descriptor> descriptors)
    {
        return spaced(Helpers.getEnumSet(descriptors).stream().map(ed -> assertion(ed)));
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
            String.format("static_assert(static_cast<int>(%s::%s) == static_cast<int>(twinoaks::%s::%s), \"mismatched enum values\");",
                    cppName(d.getType()),
                    d.getName(),
                    cppName(d.getType()),
                    d.getName()
            )
        );
    }

    private static Document implementations(Collection<Descriptors.Descriptor> descriptors)
    {
        return spaced(descriptors.stream().map(ConvertFromProto::implementation));
    }

    private static Document implementation(Descriptors.Descriptor d)
    {

        return line(signature((d)))
                .then("{")
                .indent(
                        Helpers.omitConversion(d) ? line("// omitted via configuration") : join(
                                line("out.clear();"),
                                messageFieldConversions(d),
                                primitiveFieldConversions(d),
                                wrappedPrimitiveFieldConversions(d)
                        )
                )
                .then("}");

    }

    private static Document messageFieldConversions(Descriptors.Descriptor d)
    {
        Document conversions = join(
          d.getFields().stream().map(ConvertFromProto::messageFieldConversion)
        );

        return conversions.isEmpty() ? conversions : line("// convert message fields").then(conversions);
    }

    private static Document primitiveFieldConversions(Descriptors.Descriptor d) {

        Document conversions = join(
                d.getFields().stream().map(ConvertFromProto::primitiveFieldConversion)
        );

        return conversions.isEmpty() ? conversions : line("// convert primitive fields").then(conversions);
    }

    private static Document wrappedPrimitiveFieldConversions(Descriptors.Descriptor d) {

        Document conversions = join(
                d.getFields().stream().map(ConvertFromProto::wrappedPrimitiveFieldConversion)
        );

        return conversions.isEmpty() ? conversions : line("// convert wrapped primitive fields").then(conversions);
    }

    private static Document primitiveFieldConversion(Descriptors.FieldDescriptor field)
    {
        if(field.getType() == Descriptors.FieldDescriptor.Type.MESSAGE) return Document.empty;

        if(field.getType() == Descriptors.FieldDescriptor.Type.ENUM)
        {
            if(Helpers.isRequired(field))
            {
                return line(
                        String.format("out.%s = static_cast<%s>(in.%s());",
                                field.getName(),
                                Helpers.getDDSName(field.getEnumType()),
                                field.getName().toLowerCase()
                        )
                );
            }
            else
            {
                return line(
                        String.format("out.%s = allocate_enum<%s>(in.%s());",
                                field.getName(),
                                Helpers.getDDSName(field.getEnumType()),
                                field.getName().toLowerCase()
                        )
                );
            }
        }
        else
        {
            if(Helpers.isRequired(field))
            {
                return line(
                        String.format("out.%s = convert(in.%s());",
                                field.getName(),
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
    }

    private static Document wrappedPrimitiveFieldConversion(Descriptors.FieldDescriptor field)
    {
        if(field.getType() != Descriptors.FieldDescriptor.Type.MESSAGE) return Document.empty;
        if(!Helpers.isPrimitiveWrapper(field.getMessageType())) return Document.empty;

        return line(
                "if(in.has_%s()) out.%s = allocate(in.%s().value());",
                field.getName().toLowerCase(),
                field.getName(),
                field.getName().toLowerCase()
        );
    }

    private static Document messageFieldConversion(Descriptors.FieldDescriptor field)
    {
        if(field.getType() != Descriptors.FieldDescriptor.Type.MESSAGE) return Document.empty;
        if(Helpers.isPrimitiveWrapper(field.getMessageType())) return Document.empty;


        if(Helpers.isInherited(field))
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
                return line("for(const auto& input : in.%s())", field.getName().toLowerCase()).bracket(
                        join(
                                line("%s ouput;", Helpers.getDDSName(field.getMessageType())),
                                line("convert_from_proto(input, ouput);"),
                                line("out.%s.push_back(ouput);", field.getName())
                        )
                );
            }
            else
            {
                if(Helpers.isRequired(field))
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
                                    "if(in.has_%s())",
                                    field.getName().toLowerCase()
                            )
                    ).bracket(
                            line("out.%s = new %s();", field.getName(), Helpers.getDDSName(field.getMessageType()))
                            .then(String.format(
                                    "convert_from_proto(in.%s(), *out.%s);",
                                    field.getName().toLowerCase(),
                                    field.getName()
                            ))
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

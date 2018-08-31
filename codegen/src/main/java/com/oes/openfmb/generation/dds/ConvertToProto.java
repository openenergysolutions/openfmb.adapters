package com.oes.openfmb.generation.dds;

import com.google.protobuf.Descriptors;
import com.google.protobuf.StringValue;
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

public class ConvertToProto implements CppFileCollection {

    private final List<Descriptors.Descriptor> profiles;
    private final Set<Descriptors.Descriptor> childTypes;

    ConvertToProto(List<Descriptors.Descriptor> profiles) {
        this.profiles = profiles;
        this.childTypes = Helpers.getChildDescriptors(profiles);
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
                        "ConvertToProto.cpp",
                        () -> join(
                                FileHeader.lines,
                                include("ConvertToProto.h"),
                                space,
                                include("../ConvertToProtoHelpers.h"),
                                space,
                                namespace("adapter",
                                        namespace("dds",
                                                line("// ---- forward declare the conversion routines for the child types ---"),
                                                space,
                                                signatures(this.childTypes),
                                                space,
                                                line("// ---- implement the top level profile conversion routines ---"),
                                                space,
                                                implementations(this.profiles),
                                                space,
                                                line("// ---- implement the conversion routines for the child types ---"),
                                                implementations(this.childTypes)

                                        )
                                )
                        )
                )
        );
    }

    private static Document implementations(Collection<Descriptors.Descriptor> descriptors)
    {
        return spaced(descriptors.stream().map(ConvertToProto::implementation));
    }

    private static Document implementation(Descriptors.Descriptor d)
    {
        return line(signature((d)))
                .then("{")
                .indent(
                        Helpers.omitConversion(d) ? line("// omitted via configuration") : join(
                                line("out.Clear();"),
                                messageFieldConversions(d),
                                wrappedPrimitiveFieldConversions(d),
                                primitiveFieldConversions(d)
                        )
                )
                .then("}");

    }


    private static Document messageFieldConversions(Descriptors.Descriptor d)
    {
        final Document conversions = join(
                d.getFields().stream().map(ConvertToProto::messageFieldConversion)
        );

        return conversions.isEmpty() ? conversions : line("// convert message fields").then(conversions);
    }

    private static Document primitiveFieldConversions(Descriptors.Descriptor d) {

        final Document conversions = join(
                d.getFields().stream().map(ConvertToProto::primitiveFieldConversion)
        );

        return conversions.isEmpty() ? conversions : line("// convert required primitive fields").then(conversions);
    }

    private static Document wrappedPrimitiveFieldConversions(Descriptors.Descriptor d) {

        final Document conversions = join(
                d.getFields().stream().map(ConvertToProto::wrappedPrimitiveFieldConversion)
        );

        return conversions.isEmpty() ? conversions : line("// convert optional (wrapped) primitive fields").then(conversions);
    }

    private static Document wrappedPrimitiveFieldConversion(Descriptors.FieldDescriptor field)
    {
        if(field.getType() != Descriptors.FieldDescriptor.Type.MESSAGE) return Document.empty;

        final Descriptors.Descriptor msgType = field.getMessageType();

        if(!Helpers.isPrimitiveWrapper(msgType)) return Document.empty;

        if(msgType.equals(StringValue.getDescriptor()))
        {
            return line("if(in.%s) out.mutable_%s()->set_value(in.%s);", field.getName(), field.getName().toLowerCase(), field.getName());
        }
        else
        {
            return line("if(in.%s) out.mutable_%s()->set_value(*in.%s);", field.getName(), field.getName().toLowerCase(), field.getName());
        }

    }

    private static Document primitiveFieldConversion(Descriptors.FieldDescriptor field)
    {
        if(field.getType() == Descriptors.FieldDescriptor.Type.MESSAGE) return Document.empty;

        if(field.getType() == Descriptors.FieldDescriptor.Type.BYTES)
        {
            return line(String.format("// TODO - field '%s' of type 'bytes' omitted", field.getName()));
        }

        if(field.getType() == Descriptors.FieldDescriptor.Type.ENUM)
        {
            if(Helpers.isRequired(field))
            {
                return line(
                        String.format("out.set_%s(static_cast<%s>(in.%s));",
                                field.getName().toLowerCase(),
                                Helpers.getProtoName(field.getEnumType()),
                                field.getName()
                        )
                );
            }
            else
            {
                return line(
                        String.format("if(in.%s) out.set_%s(static_cast<%s>(*in.%s));",
                                field.getName(),
                                field.getName().toLowerCase(),
                                Helpers.getProtoName(field.getEnumType()),
                                field.getName()
                        )
                );
            }
        }
        else
        {
            if(Helpers.isRequired(field))
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
    }

    private static Document messageFieldConversion(Descriptors.FieldDescriptor field)
    {
        if(field.getType() != Descriptors.FieldDescriptor.Type.MESSAGE) return Document.empty;

        if(Helpers.isPrimitiveWrapper(field.getMessageType())) return Document.empty;

        if(Helpers.isInherited(field))
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
                return line("for(decltype(in.%s.length()) i = 0; i < in.%s.length(); ++i)", field.getName(), field.getName()).bracket(
                    line("convert_to_proto(in.%s.at(i), *out.mutable_%s()->Add());", field.getName(), field.getName().toLowerCase())
                );
            }
            else
            {
                if(Helpers.isRequired(field))
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
                   include("OpenFMB-3.0.0TypeSupport.hh"),
                   space,
                   include("../NamespaceAlias.h")
               )
       );

    }

    private static Document signatures(Collection<Descriptors.Descriptor> descriptors) {
        return spaced(
                descriptors.stream().map(d -> line(signature(d) + ";"))
        );

    }

    private static String signature(Descriptors.Descriptor d)
    {
        return String.format("void convert_to_proto(const %s& in, %s& out)", Helpers.getDDSName(d), Helpers.getProtoName(d));
    }

}

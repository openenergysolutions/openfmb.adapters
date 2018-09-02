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

import static com.oes.openfmb.generation.document.Document.*;

public class ConvertToProto implements CppFileCollection {

    private final Set<Descriptors.Descriptor> profiles;
    private final Set<Descriptors.Descriptor> childTypes;

    ConvertToProto(Set<Descriptors.Descriptor> profiles) {
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
                                       headerIncludes(this.profiles),
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
                        spaced(
                                line("out.Clear();"),
                                spaced(
                                        d.getFields().stream().map(field -> FieldHandler.get(new FieldHandlerImpl(field), field))
                                )
                        )
                )
                .then("}");
    }

    private static Document headerIncludes(Collection<Descriptors.Descriptor> descriptors)
    {
       return join(
               Includes.getIncludeFiles(descriptors).stream().map(Document::include)
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

    private static class FieldHandlerImpl implements FieldHandler {

        private final Descriptors.FieldDescriptor field;

        FieldHandlerImpl(Descriptors.FieldDescriptor field) {
            this.field = field;
        }

        @Override
        public Document repeatedMessage() {
            return line("for(decltype(in.%s.length()) i = 0; i < in.%s.length(); ++i)", field.getName(), field.getName()).bracket(
                    line("convert_to_proto(in.%s.at(i), *out.mutable_%s()->Add());", field.getName(), field.getName().toLowerCase())
            );
        }

        @Override
        public Document inheritedMessage() {
            return line(
                    String.format(
                            "convert_to_proto(in, *out.mutable_%s()); // inherited type",
                            field.getName().toLowerCase()
                    )
            );
        }

        @Override
        public Document requiredMessage() {
            return line(
                    String.format(
                            "convert_to_proto(in.%s, *out.mutable_%s()); // required field in DDS",
                            field.getName(),
                            field.getName().toLowerCase()
                    )
            );
        }

        @Override
        public Document optionalMessage() {
            return line(
                    String.format(
                            "if(in.%s) convert_to_proto(*in.%s, *out.mutable_%s());",
                            field.getName(),
                            field.getName(),
                            field.getName().toLowerCase()
                    )
            );
        }

        @Override
        public Document requiredEnum() {
            return line(
                    String.format("out.set_%s(static_cast<%s>(in.%s));",
                            field.getName().toLowerCase(),
                            Helpers.getProtoName(field.getEnumType()),
                            field.getName()
                    )
            );
        }

        @Override
        public Document optionalEnum(Descriptors.EnumDescriptor ed) {
            return line(
                    String.format("if(in.%s) out.mutable_%s()->set_value(static_cast<%s>(*in.%s));  // wrapped optional enum",
                            field.getName(),
                            field.getName().toLowerCase(),
                            Helpers.getProtoName(ed),
                            field.getName()
                    )
            );
        }

        @Override
        public Document requiredString() {
            return line(
                    String.format("if(in.%s) out.set_%s(convert_%s(in.%s));",
                            field.getName(),
                            field.getName().toLowerCase(),
                            field.getType().toString().toLowerCase(),
                            field.getName()
                    )
            );
        }

        @Override
        public Document optionalString() {
            return line("if(in.%s) out.mutable_%s()->set_value(in.%s);", field.getName(), field.getName().toLowerCase(), field.getName());
        }

        @Override
        public Document requiredPrimitive() {
            return line(
                    String.format("out.set_%s(in.%s);",
                            field.getName().toLowerCase(),
                            field.getName()
                    )
            );
        }

        @Override
        public Document optionalPrimitive() {
            return line("if(in.%s) out.mutable_%s()->set_value(*in.%s);", field.getName(), field.getName().toLowerCase(), field.getName());
        }
    }
}

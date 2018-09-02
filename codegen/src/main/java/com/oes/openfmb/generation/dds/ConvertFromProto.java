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

public class ConvertFromProto implements CppFileCollection {

    private final Set<Descriptors.Descriptor> profiles;
    private final Set<Descriptors.Descriptor> children;

    ConvertFromProto(Set<Descriptors.Descriptor> profiles) {
        this.profiles = profiles;
        this.children = Helpers.getChildDescriptors(profiles);
    }

    private static class FieldHandlerImpl implements FieldHandler {

        private final Descriptors.FieldDescriptor field;

        FieldHandlerImpl(Descriptors.FieldDescriptor field) {
            this.field = field;
        }

        @Override
        public Document repeatedMessage() {
            return line("for(const auto& input : in.%s())", field.getName().toLowerCase()).bracket(
                    join(
                            line("%s ouput;", Helpers.getDDSName(field.getMessageType())),
                            line("convert_from_proto(input, ouput);"),
                            line("out.%s.push_back(ouput);", field.getName())
                    )
            );
        }

        @Override
        public Document inheritedMessage() {
            return line(
                    String.format(
                            "if(in.has_%s()) convert_from_proto(in.%s(), out); // inherited type",
                            field.getName().toLowerCase(),
                            field.getName().toLowerCase()
                    )
            );
        }

        @Override
        public Document requiredMessage() {
            return line(
                    String.format(
                            "convert_from_proto(in.%s(), out.%s); // required field in DDS",
                            field.getName().toLowerCase(),
                            field.getName()
                    )
            );
        }

        @Override
        public Document optionalMessage() {
            return line("if(in.has_%s()) // optional field in DDS", field.getName().toLowerCase()).bracket(
                    join(
                            line("out.%s = new %s();", field.getName(), Helpers.getDDSName(field.getMessageType())),
                            line("convert_from_proto(in.%s(), *out.%s);", field.getName().toLowerCase(), field.getName())
                    )
            );
        }

        @Override
        public Document requiredEnum() {
            return line(
                    String.format("out.%s = static_cast<%s>(in.%s());",
                            field.getName(),
                            Helpers.getDDSName(field.getEnumType()),
                            field.getName().toLowerCase()
                    )
            );
        }

        @Override
        public Document optionalEnum(Descriptors.EnumDescriptor ed) {
            return line(
                    "out.%s = new %s(static_cast<%s>(in.%s().value())); // optional enum",
                        field.getName(),
                        Helpers.getDDSName(ed),
                        Helpers.getDDSName(ed),
                        field.getName().toLowerCase()
            );
        }

        @Override
        public Document requiredString() {
            return line(
                    "out.%s = allocate(in.%s()); // required string",
                    field.getName(),
                    field.getName().toLowerCase()
            );
        }

        @Override
        public Document optionalString() {
            return line(
                    "if(in.has_%s()) out.%s = allocate(in.%s().value()); // optional string",
                    field.getName().toLowerCase(),
                    field.getName(),
                    field.getName().toLowerCase()
            );
        }

        @Override
        public Document requiredPrimitive() {
            return line(
                    "out.%s = convert(in.%s()); // required primitive",
                    field.getName(),
                    field.getName().toLowerCase()
            );
        }

        @Override
        public Document optionalPrimitive() {

            return line("if(in.has_%s())", field.getName().toLowerCase()).bracket(
                    join(
                            line(
                                    "out.%s = allocate_from_wrapper_type(in.%s());",
                                    field.getName(),
                                    field.getName().toLowerCase()
                            )
                    )

            );
        }
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

    private static Document implementations(Collection<Descriptors.Descriptor> descriptors)
    {
        return spaced(descriptors.stream().map(ConvertFromProto::implementation));
    }

    private static Document implementation(Descriptors.Descriptor d)
    {

        return line(signature((d)))
                .then("{")
                .indent(
                        join(
                                line("out.clear();"),
                                join(
                                        d.getFields().stream().map(f -> FieldHandler.get(new FieldHandlerImpl(f), f))
                                )
                        )
                )
                .then("}");

    }

    private static String signature(Descriptors.Descriptor d)
    {
        return String.format("void convert_from_proto(const %s& in, %s& out)", Helpers.getProtoName(d), Helpers.getDDSName(d));
    }

    private static String cppName(Descriptors.EnumDescriptor d)
    {
        return d.getFullName().replace(".", "::");
    }

    private static Document enumAssertions(Collection<Descriptors.Descriptor> descriptors)
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

}

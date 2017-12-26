package com.oes.openfmb.generation.proto;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.document.*;
import com.oes.openfmb.util.DescriptorUtil;

import java.util.List;

import static com.oes.openfmb.generation.document.Documents.*;

public class AccessorsFile implements CppClassFile {

    private final Descriptors.Descriptor descriptor;

    public AccessorsFile(Descriptors.Descriptor descriptor) {
        this.descriptor = descriptor;
    }

    @Override
    public Document header() {
        return Documents.join(
                FileHeader.lines,
                guards(this.getClassName(),
                               this.includes(),
                               space,
                               Documents.namespace(
                                        "openfmb",
                                        clazz(this.getClassName(),
                                                lines(
                                                        "",
                                                        "public:",
                                                        "",
                                                        String.format("typedef %s profile_t;", this.descriptor.getName()),
                                                        "",
                                                        this.getClassName() + "();",
                                                        "",
                                                        "inline const analogue_map_t<profile_t>& get_analogues() const { return this->analogues; }",
                                                        "inline const bcr_map_t<profile_t>& get_bcrs() const { return this->bcrs; }",
                                                        "",
                                                        "private:",
                                                        "",
                                                        "analogue_map_t<profile_t> analogues;",
                                                        "bcr_map_t<profile_t> bcrs;"
                                                )
                                        )
                                )
                        )
                );
    }

    @Override
    public Document implementation() {

        return FileHeader.lines
                .append(include(this.getClassName()+".h"))
                .space()
                .append(
                    Documents.namespace(
                    "openfmb",
                               line(String.format("%s::%s()", this.getClassName(), this.getClassName()))
                                       .append("{")
                                       .space()
                                       .append("// initialize the analog map")
                                       .append(
                                               entries("analogues",
                                                            DescriptorUtil.find(
                                                                this.descriptor,
                                                                DescriptorUtil.isMessageWithName("AnalogueValue")
                                                            )
                                               )
                                       )
                                       .space()
                                       .append("// initialize the bcr map")
                                       .space()
                                       .append(
                                               entries("bcrs",
                                                       DescriptorUtil.find(
                                                               this.descriptor,
                                                               DescriptorUtil.isMessageWithName("BCR")
                                                       )
                                               )
                                       )
                                       .space()
                                       .append("} // end constructor")
                    )
        );

    }

    private Document includes()
    {
        return include(this.descriptor.getName() + ".pb.h")
                .append(include("../HelperTypedefs.h"));

    }

    private String getClassName()
    {
        return this.descriptor.getName() + "Map";
    }

    private Document entries(String mapName, List<FieldPath> fields)
    {
        return Documents.spaced(fields.stream().map(f -> getter(mapName, f)));
    }

    private static List<FieldPath> analogs(Descriptors.Descriptor descriptor) {
        return DescriptorUtil.find(
                descriptor,
                DescriptorUtil.isMessageWithName("AnalogueValue")
        );
    }

    private static Document getter(String mapName, FieldPath path) {

        final Document signature = line(
                String.format(
                        "this->%s[\"%s\"] = [](%s& message) -> %s* {",
                        mapName,
                        path.getPathString("."),
                        path.getRoot().getName(),
                        path.getInfo().field.getMessageType().getName()
                )
        );

        return signature.indent(
                    String.format("return %s;", accessor(path))
                 ).append("};");
    }

    private static String accessor(FieldPath path) {
        final StringBuilder builder = new StringBuilder("message");
        path.visit(info ->
            builder.append(info.depth == 0 ? ".mutable_" : "->mutable_").append(info.field.getName().toLowerCase()).append("()")
        );
        return builder.toString();
    }

}

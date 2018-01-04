package com.oes.openfmb.generation.proto;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.document.*;
import com.oes.openfmb.util.DescriptorUtil;
import openfmb.commonmodule.AnalogValue;
import openfmb.commonmodule.BCR;

import java.util.List;

import static com.oes.openfmb.generation.document.Documents.*;

public class AccessorsFile implements CppClassFile {

    private final String filename;
    private final Descriptors.Descriptor descriptor;

    public AccessorsFile(String filename, Descriptors.Descriptor descriptor) {
        this.filename = filename;
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
                                                        String.format("typedef %s profile_t;", getCppTypeName(this.descriptor)),
                                                        "",
                                                        this.getClassName() + "();",
                                                        "",
                                                        "inline const analogue_map_t<profile_t>& get_analogs() const { return this->analogs; }",
                                                        "inline const bcr_map_t<profile_t>& get_bcrs() const { return this->bcrs; }",
                                                        "",
                                                        "private:",
                                                        "",
                                                        "analogue_map_t<profile_t> analogs;",
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
                                               entries("analogs",
                                                            DescriptorUtil.find(
                                                                this.descriptor,
                                                                DescriptorUtil.matches(AnalogValue.getDescriptor())
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
                                                               DescriptorUtil.matches(BCR.getDescriptor())
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
        return include(this.filename )
                .append(include("../HelperTypedefs.h"));

    }

    private String getClassName()
    {
        return this.descriptor.getName() + "Map";
    }

    private static String getCppTypeName(Descriptors.Descriptor descriptor)
    {
        return descriptor.getFullName().replace(".", "::");
    }

    private Document entries(String mapName, List<FieldPath> fields)
    {
        return Documents.spaced(fields.stream().map(f -> getter(mapName, f)));
    }

    private static Document getter(String mapName, FieldPath path) {

        final Document signature = line(
                String.format(
                        "this->%s[\"%s\"] = [](%s& message) -> %s* {",
                        mapName,
                        path.getPathString("."),
                        getCppTypeName(path.getRoot()),
                        getCppTypeName(path.getInfo().field.getMessageType())
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

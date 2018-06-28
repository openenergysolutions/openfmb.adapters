package com.oes.openfmb.generation.proto;

import com.google.protobuf.Descriptors;
import com.google.protobuf.FloatValue;
import com.oes.openfmb.generation.document.CppFilePair;
import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.Documents;
import com.oes.openfmb.generation.document.FileHeader;
import com.oes.openfmb.util.FieldPathImpl;
import openfmb.commonmodule.*;
import openfmb.essmodule.ENG_ESSFunctionKind;
import openfmb.essmodule.ENG_ESSFunctionParameter;
import openfmb.essmodule.ESSPoint;
import openfmb.loadmodule.LoadPoint;
import openfmb.solarmodule.SolarPoint;
import openfmb.switchmodule.SwitchCSG;

import java.util.*;
import java.util.stream.Stream;
import java.util.stream.StreamSupport;

import static com.oes.openfmb.generation.document.Documents.*;

public class MutableModelVisitorFile extends CppFilePair {

    private final Descriptors.Descriptor descriptor;
    private final Iterable<String> includes;

    private MutableModelVisitorFile(Descriptors.Descriptor descriptor, Iterable<String> includes) {
        this.descriptor = descriptor;
        this.includes = includes;
    }

    public static CppFilePair from(Descriptors.Descriptor descriptor, String includes)
    {
        return new MutableModelVisitorFile(descriptor, Collections.singletonList(includes));
    }

    @Override
    protected String baseFileName() {
        return descriptor.getName()+"MutableModelVisitor";
    }

    @Override
    public Document header() {
        return join(
                FileHeader.lines,
                join(StreamSupport.stream(includes.spliterator(), false).map(Documents::include)),
                include("../IMutableModelVisitor.h"),
                Documents.space,
                namespace(
                        "adapter",
                        spaced(
                                line(getVisitSignature(descriptor)+";")
                        )
                )
        );
    }

    @Override
    public Document implementation() {

        return join(
                include("adapter-api/config/generated/" + headerFileName()),
                space,
                include("adapter-api/config/generated/MutableModelVisitorTemplates.h"),
                space,
                namespace(
                "adapter",
                        spaced(
                                visitImpl(this.descriptor)
                        )
                )
        );
    }

    static private String cppMessageName(Descriptors.GenericDescriptor descriptor)
    {
        return descriptor.getFullName().replace(".", "::");
    }

    private String getVisitSignature(Descriptors.Descriptor descriptor)
    {
        return String.format("void visit(IMutableModelVisitor<%s>& visitor)", cppMessageName(descriptor));
    }

    private Document visitImpl(Descriptors.Descriptor descriptor)
    {
        return line(getVisitSignature(descriptor))
                .append("{")
                .indent(line("DescriptorPathImpl path;"))
                .space()
                .indent(spaced(descriptor.getFields().stream().map(this::getFieldLines)))
                .append("}");

    }

    static private String getVisitFunctionName(Descriptors.GenericDescriptor descriptor)
    {
        return "visit_" + descriptor.getFullName().replace(".", "_");
    }

    private String getContext(Descriptors.FieldDescriptor field)
    {
        return String.format("[](%s& profile) { return profile.mutable_%s(); }", Helpers.cppMessageName(this.descriptor), field.getName().toLowerCase());
    }

    private Document getFieldLines(Descriptors.FieldDescriptor field)
    {
        return line(String.format("path.push(%s::descriptor());", Helpers.cppMessageName(field.getMessageType())))
                        .append(String.format("if(visitor.start_message_field(%s, path))", Helpers.quoted(field.getName())))
                        .append("{")
                        .indent(
                                line(String.format("%s<%s>(", getVisitFunctionName(field.getMessageType()), Helpers.cppMessageName(this.descriptor)))
                                .indent(getContext(field)+",")
                                .indent("path, visitor")
                                .append(");")
                        )
                        .append("}")
                        .append("visitor.end_message_field();")
                        .append("path.pop();");
    }

}

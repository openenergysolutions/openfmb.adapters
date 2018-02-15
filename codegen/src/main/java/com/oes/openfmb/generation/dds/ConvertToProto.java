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
                //include("../ConvertFromProtoHelpers.h"),
                //space,
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
                .append("}");

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

    private static String cppName(Descriptors.EnumDescriptor d)
    {
        return d.getFullName().replace(".", "::");
    }

    private static String cppName(Descriptors.Descriptor d)
    {
        return d.getFullName().replace(".", "::");
    }
}

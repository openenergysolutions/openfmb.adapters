package com.oes.openfmb.generation.dds.rti;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.Includes;
import com.oes.openfmb.generation.document.CppFile;
import com.oes.openfmb.generation.document.CppFileCollection;
import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.FileHeader;

import java.util.Collections;
import java.util.List;
import java.util.Set;

import static com.oes.openfmb.generation.document.Document.*;

public class PublisherFactory implements CppFileCollection {

    private final Set<Descriptors.Descriptor> profiles;

    PublisherFactory(Set<Descriptors.Descriptor> profiles) {
        this.profiles = profiles;
    }

    @Override
    public List<CppFile> headers() {
        return Collections.singletonList(
                new CppFile(
                        "PublisherFactory.h",
                        () -> join(
                                FileHeader.lines,
                                guards("PublisherFactory",
                                        headerIncludes(),
                                        space,
                                        namespace("adapter",
                                                namespace("dds",
                                                        namespace("rti",
                                                                template(),
                                                                space,
                                                                methods()
                                                        )
                                                )
                                        )
                                )
                        )
                )
        );
    }

    private Document headerIncludes()
    {
        return spaced(
            include("DDSPublisher.h"),
            join(Includes.getIncludeFiles(this.profiles).stream().map(Document::include)),
            include("OpenFMB-IDL.hpp")
        );
    }

    private Document template()
    {
        return lines(
                "template<typename T>",
                "struct PublisherFactory;"
        );
    }

    private Document methods()
    {
        return spaced(
                this.profiles.stream().map(this::method)
        );
    }

    private Document method(Descriptors.Descriptor profile)
    {
        return line("template<>")
                .then(String.format("struct PublisherFactory<%s>", Helpers.getProtoName(profile)))
                .bracketSemicolon(
                    line(String.format("static std::shared_ptr<api::ISubscriptionHandler<%s>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)", Helpers.getProtoName(profile)))
                    .bracket(lines(
                                String.format("::dds::topic::Topic<%s> topic{dds_publisher->participant(), \"openfmb.%s\"};", Helpers.getDDSName(profile), profile.getFullName()),
                                String.format("return std::make_shared<DDSPublisher<%s, %s>>(logger, dds_publisher, topic);", Helpers.getProtoName(profile), Helpers.getDDSName(profile))
                            )
                    )
                );
    }

    @Override
    public List<CppFile> implementations() {
        return Collections.emptyList();
    }
}

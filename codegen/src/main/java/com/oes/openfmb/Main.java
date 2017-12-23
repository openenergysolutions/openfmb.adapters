package com.oes.openfmb;

import com.oes.openfmb.generation.document.impl.ConsolePrinter;
import com.oes.openfmb.generation.proto.AccessorsFile;
import com.oes.openfmb.proto.ResourceReadingProfileOuterClass;

import java.util.stream.Stream;

public class Main {

    public static void main(String[] args) {


        Stream.of(
                ResourceReadingProfileOuterClass.ResourceReadingProfile.getDescriptor()
        ).map(AccessorsFile::new).forEach(f -> f.implementation().write(ConsolePrinter.instance));


    }

}
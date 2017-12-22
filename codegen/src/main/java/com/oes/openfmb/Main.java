package com.oes.openfmb;

import com.oes.openfmb.generation.document.impl.ConsolePrinter;
import com.oes.openfmb.generation.proto.Fields;
import com.oes.openfmb.proto.ResourceReadingProfileOuterClass;
import com.oes.openfmb.util.DescriptorUtil;

import java.util.List;

public class Main {
    public static void main(String[] args) {


        final List<FieldPath> analogs = DescriptorUtil.find(
                ResourceReadingProfileOuterClass.ResourceReadingProfile.getDescriptor(),
                DescriptorUtil.isMessageWithName("AnalogueValue")
        );

        analogs.forEach(a -> Fields.getter(a).write(new ConsolePrinter()));


/*
        final List<FieldPath> bcrs = DescriptorUtil.find(
               ResourceReadingProfileOuterClass.ResourceReadingProfile.getDescriptor(),
                DescriptorUtil.isMessageWithName("BCR")
        );

        bcrs.forEach(a -> System.out.println(a.getPathString(".")));
*/
    }

}
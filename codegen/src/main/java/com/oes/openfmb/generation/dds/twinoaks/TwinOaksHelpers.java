package com.oes.openfmb.generation.dds.twinoaks;

import com.google.protobuf.Descriptors;

public class TwinOaksHelpers {
    static String getProtoName(Descriptors.GenericDescriptor d)
    {
        return d.getFullName().replace(".", "::");
    }

    static String getDDSName(Descriptors.GenericDescriptor d)
    {
        return "twinoaks::" + getProtoName(d);
    }

}

package com.oes.openfmb.generation.dds;

import com.google.protobuf.Descriptors;

public class Helpers {

    private Helpers() {}

    static String getProtoName(Descriptors.Descriptor d)
    {
        return d.getFullName().replace(".", "::");
    }

    static String getDDSName(Descriptors.Descriptor d)
    {
        return "OpenFMB_Model::OpenFMB_Information_Model::openfmb::" + getProtoName(d);
    }
}

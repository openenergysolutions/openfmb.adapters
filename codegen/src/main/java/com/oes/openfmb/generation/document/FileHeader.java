package com.oes.openfmb.generation.document;

import static com.oes.openfmb.generation.document.Documents.space;

public class FileHeader {

    public static Document lines = Documents.lines(
                "  _   _         ______    _ _ _   _             _ _ _",
                " | \\ | |       |  ____|  | (_) | (_)           | | | |",
                " |  \\| | ___   | |__   __| |_| |_ _ _ __   __ _| | | |",
                " | . ` |/ _ \\  |  __| / _` | | __| | '_ \\ / _` | | | |",
                " | |\\  | (_) | | |___| (_| | | |_| | | | | (_| |_|_|_|",
                " |_| \\_|\\___/  |______\\__,_|_|\\__|_|_| |_|\\__, (_|_|_)",
                "                                           __/ |",
                "                                          |___/",
                "",
                " This file is auto-generated. Do not edit manually"
    ).prepend(space).append(space).prefix("// ").append(space);

}

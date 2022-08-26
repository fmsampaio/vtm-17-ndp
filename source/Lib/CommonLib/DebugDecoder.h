#include <cstdio>


class DebugDecoder {
    public:
        static FILE* debug_vtm_file;
        static bool isDecoding;

        static void init();
        static void close();
};
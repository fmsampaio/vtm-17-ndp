#include "DebugDecoder.h"

FILE* DebugDecoder::debug_vtm_file;
bool DebugDecoder::isDecoding = false;

void DebugDecoder::init() {  
    debug_vtm_file = fopen("debug_vtm_file.log", "w"); 
    isDecoding = true;
}

void DebugDecoder::close() {  
    fclose(debug_vtm_file);
}
#include "include/common.h"
#include "include/chunk.h"
#include "include/debug.h"

int main() {
    Chunk chunk;
    initChunk(&chunk);
    writeChunk(&chunk,OP_RETURN);
    disassembleChunk(&chunk, "test chunk");
    freeChunk(&chunk);
    return 0;
}
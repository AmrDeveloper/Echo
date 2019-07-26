#include "include/common.h"
#include "include/chunk.h"
#include "include/debug.h"

#include "vm/echo-vm.h"

int main() {
    initVM();

    Chunk chunk;
    initChunk(&chunk);

    int constant = addConstant(&chunk, 1.2);
    writeChunk(&chunk, OP_CONSTANT, 123);
    writeChunk(&chunk, constant, 123);
    writeChunk(&chunk, OP_NEGATE, 123);
    writeChunk(&chunk, OP_RETURN, 123);
    disassembleChunk(&chunk, "test chunk");

    interpret(&chunk);

    freeChunk(&chunk);
    freeVM();
    return 0;
}
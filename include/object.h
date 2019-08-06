//
// Created by AmrDeveloper on 7/27/2019.
//

#ifndef ECHO_OBJECT_H
#define ECHO_OBJECT_H

#include "common.h"
#include "value.h"
#include "chunk.h"

#define OBJ_TYPE(value)         (AS_OBJ(value)->type)

#define IS_FUNCTION(value)      isObjType(value, OBJ_FUNCTION)
#define IS_STRING(value)        isObjType(value, OBJ_STRING)

#define AS_FUNCTION(value)      ((ObjFunction*)AS_OBJ(value))
#define AS_STRING(value)        ((ObjString*)AS_OBJ(value))
#define AS_CSTRING(value)       (((ObjString*)AS_OBJ(value))->chars)

typedef enum {
    OBJ_FUNCTION,
    OBJ_STRING,
} ObjType;

struct sObj {
    ObjType type;
    struct sObj* next;
};

typedef struct {
    Obj obj;
    int arity;
    Chunk chunk;
    ObjString* name;
} ObjFunction;

struct sObjString {
    Obj obj;
    int length;
    char *chars;
    uint32_t hash;
};

void printObject(Value value);

ObjFunction* newFunction();

ObjString* takeString(char* chars, int length);

ObjString* copyString(const char* chars, int length);

static inline bool isObjType(Value value, ObjType type) {
    return IS_OBJ(value) && AS_OBJ(value)->type == type;
}

#endif

//
// Created by AmrDeveloper on 7/26/2019.
//
#ifndef ECHO_VALUE_H
#define ECHO_VALUE_H

#include "common.h"

typedef struct sObj Obj;
typedef struct sObjString ObjString;

typedef enum {
    VAL_BOOL,
    VAL_NIL,
    VAL_NUMBER,
    VAL_OBJ,
} ValueType;

typedef struct {
   ValueType type;
   union{
      bool boolean;
      double number;
      Obj* obj;
   }as;
}Value;

#define IS_OBJ(value)     ((value).type == VAL_OBJ)
#define IS_BOOL(value)    ((value).type == VAL_BOOL)
#define IS_NIL(value)     ((value).type == VAL_NIL)
#define IS_NUMBER(value)  ((value).type == VAL_NUMBER)

#define AS_OBJ(value)     ((value).as.obj)
#define AS_BOOL(value)    ((value).as.boolean)
#define AS_NUMBER(value)  ((value).as.number)

#define OBJ_VAL(object)   ((Value){ VAL_OBJ, { .obj = (Obj*)object } })
#define BOOL_VAL(value)   ((Value){ VAL_BOOL, { .boolean = value } })
#define NIL_VAL           ((Value){ VAL_NIL, { .number = 0 } })
#define NUMBER_VAL(value) ((Value){ VAL_NUMBER, { .number = value } })


/**
 * The constant pool
 */
typedef struct {
    int capacity;
    int count;
    Value *values;
} ValueArray;

bool valuesEqual(Value a, Value b);

void initValueArray(ValueArray *array);

void freeValueArray(ValueArray *array);

void writeValueArray(ValueArray *array, Value value);

void printValue(Value value);

#endif

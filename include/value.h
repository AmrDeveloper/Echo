//
// Created by AmrDeveloper on 7/26/2019.
//
#ifndef ECHO_VALUE_H
#define ECHO_VALUE_H

#include "common.h"
#include <string.h>

typedef struct sObj Obj;
typedef struct sObjString ObjString;

#ifdef NAN_BOXING

#define QNAN     ((uint64_t)0x7ffc000000000000)
#define SIGN_BIT ((uint64_t)0x8000000000000000)

#define TAG_NIL   1 // 01.
#define TAG_FALSE 2 // 10.
#define TAG_TRUE  3 // 11.


typedef uint64_t Value;

#define IS_BOOL(v)      (((v) & FALSE_VAL) == FALSE_VAL)
#define IS_NIL(v)       ((v) == NIL_VAL)
#define IS_NUMBER(v)    (((v) & QNAN) != QNAN)
#define IS_OBJ(v)       (((v) & (QNAN | SIGN_BIT)) == (QNAN | SIGN_BIT))


#define AS_BOOL(v)      ((v) == TRUE_VAL)
#define AS_NUMBER(v)    valueToNum(v)
#define AS_OBJ(v)       ((Obj*)(uintptr_t)((v) & ~(SIGN_BIT | QNAN)))

#define BOOL_VAL(b)     ((b) ? TRUE_VAL : FALSE_VAL)

#define FALSE_VAL       ((Value)(uint64_t)(QNAN | TAG_FALSE))
#define TRUE_VAL        ((Value)(uint64_t)(QNAN | TAG_TRUE))

#define NIL_VAL         ((Value)(uint64_t)(QNAN | TAG_NIL))

#define NUMBER_VAL(num) numToValue(num)

#define OBJ_VAL(obj) \
    (Value)(SIGN_BIT | QNAN | (uint64_t)(uintptr_t)(obj))

typedef union {
    uint64_t bits;
    double num;
} DoubleUnion;


static inline double valueToNum(Value value) {
    DoubleUnion data;
    data.bits = value;
    return data.num;
}

static inline Value numToValue(double num) {
    Value value;
    memcpy(&value, &num, sizeof(double));
    return value;
}
#else

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

#endif

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

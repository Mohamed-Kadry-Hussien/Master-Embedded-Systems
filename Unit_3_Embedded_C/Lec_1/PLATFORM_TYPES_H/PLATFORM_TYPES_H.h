/********************************************PLATFORM_TYPES_H*******************************************/
/********************************************ENG.MohamedKadry*******************************************/
/***********************************************Embedded_C**********************************************/
#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H

#include <stdbool.h>

/* Define signed and unsigned 8-bit integer types */
typedef signed char int8_t;
typedef unsigned char uint8_t;

/* Define signed and unsigned 16-bit integer types */
typedef signed short int16_t;
typedef unsigned short uint16_t;

/* Define signed and unsigned 32-bit integer types */
typedef signed int int32_t;
typedef unsigned int uint32_t;

/* Define signed and unsigned 64-bit integer types */
typedef signed long long int64_t;
typedef unsigned long long uint64_t;

/* Define 32-bit and 64-bit floating-point types */
typedef float float32_t;
typedef double float64_t;

/* Define boolean type */
typedef bool boolean;

/* Define macros for TRUE and FALSE */
#define TRUE 1
#define FALSE 0

/* Define NULL pointer */
#define NULL ((void*)0)

/* Define volatile signed and unsigned 8-bit integer types */
typedef volatile signed char vint8_t;
typedef volatile unsigned char vuint8_t;

/* Define volatile signed and unsigned 16-bit integer types */
typedef volatile signed short vint16_t;
typedef volatile unsigned short vuint16_t;

/* Define volatile signed and unsigned 32-bit integer types */
typedef volatile signed int vint32_t;
typedef volatile unsigned int vuint32_t;

/* Define volatile signed and unsigned 64-bit integer types */
typedef volatile signed long long vint64_t;
typedef volatile unsigned long long vuint64_t;

/* Define volatile 32-bit floating-point type  */
typedef volatile float vfloat32;

/* Define volatile 64-bit floating-point type */
typedef volatile double vfloat64;

/* Define volatile boolean type */
typedef volatile _Bool vboolean;

/* Define volatile pointer type */
typedef volatile void* vptr;
/*Define volatile const type */
typedef volatile const void* vconst;
/*Define SET_BIT and CLEAR_BIT and TOGGLE_BIT Macros */
#define SET_BIT(REG,BIT)     ((REG) |= (1U << (BIT)))
#define CLEAR_BIT(REG,BIT)   ((REG) &= ~(1U << (BIT)))
#define TOGGLE_BIT(REG,BIT)  ((REG) ^= (1U << (BIT)))

#endif

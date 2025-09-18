#ifndef TYPESOUP
#define	TYPESOUP 

typedef signed char int8;
typedef unsigned char uint8;
typedef signed short int int16;
typedef unsigned short int uint16;
typedef signed int int32;
typedef unsigned int uint32;
typedef long long int64;
typedef unsigned long int uint64;

typedef float float32;
typedef double float64;
typedef long double float80;

// typedef int8 boolean;
// #define true 1
// #define false 0


typedef enum __attribute__((enum_extensibility(closed))) {
    FALSE = 0,
    TRUE  = 1
} boolean;


#endif

#ifdef TYPESOUP_IMPLEMENTED


#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct t1972;

#include "codegen/il2cpp-codegen.h"
#include "t3.h"

extern "C" void m14053_gshared (t1972 * __this, const MethodInfo* method);
#define m14053(__this, method) (( void (*) (t1972 *, const MethodInfo*))m14053_gshared)(__this, method)
extern "C" int32_t m14054_gshared (t1972 * __this, t3  p0, const MethodInfo* method);
#define m14054(__this, p0, method) (( int32_t (*) (t1972 *, t3 , const MethodInfo*))m14054_gshared)(__this, p0, method)
extern "C" bool m14055_gshared (t1972 * __this, t3  p0, t3  p1, const MethodInfo* method);
#define m14055(__this, p0, p1, method) (( bool (*) (t1972 *, t3 , t3 , const MethodInfo*))m14055_gshared)(__this, p0, p1, method)

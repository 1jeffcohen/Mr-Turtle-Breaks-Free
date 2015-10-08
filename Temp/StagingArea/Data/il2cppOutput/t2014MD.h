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

struct t2014;
struct t14;

#include "codegen/il2cpp-codegen.h"

extern "C" void m14640_gshared (t2014 * __this, const MethodInfo* method);
#define m14640(__this, method) (( void (*) (t2014 *, const MethodInfo*))m14640_gshared)(__this, method)
extern "C" void m14641_gshared (t14 * __this , const MethodInfo* method);
#define m14641(__this , method) (( void (*) (t14 * , const MethodInfo*))m14641_gshared)(__this , method)
extern "C" int32_t m14642_gshared (t2014 * __this, t14 * p0, t14 * p1, const MethodInfo* method);
#define m14642(__this, p0, p1, method) (( int32_t (*) (t2014 *, t14 *, t14 *, const MethodInfo*))m14642_gshared)(__this, p0, p1, method)
extern "C" t2014 * m14643_gshared (t14 * __this , const MethodInfo* method);
#define m14643(__this , method) (( t2014 * (*) (t14 * , const MethodInfo*))m14643_gshared)(__this , method)

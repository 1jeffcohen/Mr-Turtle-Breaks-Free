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

struct t2232;
struct t14;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16765_gshared (t2232 * __this, const MethodInfo* method);
#define m16765(__this, method) (( void (*) (t2232 *, const MethodInfo*))m16765_gshared)(__this, method)
extern "C" void m16766_gshared (t14 * __this , const MethodInfo* method);
#define m16766(__this , method) (( void (*) (t14 * , const MethodInfo*))m16766_gshared)(__this , method)
extern "C" int32_t m16767_gshared (t2232 * __this, t14 * p0, t14 * p1, const MethodInfo* method);
#define m16767(__this, p0, p1, method) (( int32_t (*) (t2232 *, t14 *, t14 *, const MethodInfo*))m16767_gshared)(__this, p0, p1, method)
extern "C" t2232 * m16768_gshared (t14 * __this , const MethodInfo* method);
#define m16768(__this , method) (( t2232 * (*) (t14 * , const MethodInfo*))m16768_gshared)(__this , method)

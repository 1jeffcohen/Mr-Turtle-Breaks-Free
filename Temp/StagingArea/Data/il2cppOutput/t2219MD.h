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

struct t2219;
struct t14;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16674_gshared (t2219 * __this, const MethodInfo* method);
#define m16674(__this, method) (( void (*) (t2219 *, const MethodInfo*))m16674_gshared)(__this, method)
extern "C" void m16675_gshared (t14 * __this , const MethodInfo* method);
#define m16675(__this , method) (( void (*) (t14 * , const MethodInfo*))m16675_gshared)(__this , method)
extern "C" int32_t m16676_gshared (t2219 * __this, t14 * p0, t14 * p1, const MethodInfo* method);
#define m16676(__this, p0, p1, method) (( int32_t (*) (t2219 *, t14 *, t14 *, const MethodInfo*))m16676_gshared)(__this, p0, p1, method)
extern "C" t2219 * m16677_gshared (t14 * __this , const MethodInfo* method);
#define m16677(__this , method) (( t2219 * (*) (t14 * , const MethodInfo*))m16677_gshared)(__this , method)

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

struct t2159;
struct t14;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16058_gshared (t2159 * __this, const MethodInfo* method);
#define m16058(__this, method) (( void (*) (t2159 *, const MethodInfo*))m16058_gshared)(__this, method)
extern "C" int32_t m16059_gshared (t2159 * __this, t14 * p0, t14 * p1, const MethodInfo* method);
#define m16059(__this, p0, p1, method) (( int32_t (*) (t2159 *, t14 *, t14 *, const MethodInfo*))m16059_gshared)(__this, p0, p1, method)

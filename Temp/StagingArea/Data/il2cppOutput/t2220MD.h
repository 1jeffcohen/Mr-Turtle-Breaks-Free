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

struct t2220;

#include "codegen/il2cpp-codegen.h"
#include "t630.h"

extern "C" void m16678_gshared (t2220 * __this, const MethodInfo* method);
#define m16678(__this, method) (( void (*) (t2220 *, const MethodInfo*))m16678_gshared)(__this, method)
extern "C" int32_t m16679_gshared (t2220 * __this, t630  p0, t630  p1, const MethodInfo* method);
#define m16679(__this, p0, p1, method) (( int32_t (*) (t2220 *, t630 , t630 , const MethodInfo*))m16679_gshared)(__this, p0, p1, method)

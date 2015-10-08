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

struct t2197;

#include "codegen/il2cpp-codegen.h"
#include "t1221.h"

extern "C" void m16477_gshared (t2197 * __this, const MethodInfo* method);
#define m16477(__this, method) (( void (*) (t2197 *, const MethodInfo*))m16477_gshared)(__this, method)
extern "C" int32_t m16478_gshared (t2197 * __this, t1221  p0, t1221  p1, const MethodInfo* method);
#define m16478(__this, p0, p1, method) (( int32_t (*) (t2197 *, t1221 , t1221 , const MethodInfo*))m16478_gshared)(__this, p0, p1, method)

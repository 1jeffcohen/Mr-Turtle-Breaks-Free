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

struct t101;
struct t14;
struct t181;
struct t182;

#include "codegen/il2cpp-codegen.h"
#include "t196.h"
#include "t303.h"

extern "C" void m1584_gshared (t101 * __this, t14 * p0, t196 p1, const MethodInfo* method);
#define m1584(__this, p0, p1, method) (( void (*) (t101 *, t14 *, t196, const MethodInfo*))m1584_gshared)(__this, p0, p1, method)
extern "C" int32_t m11608_gshared (t101 * __this, t303  p0, t303  p1, const MethodInfo* method);
#define m11608(__this, p0, p1, method) (( int32_t (*) (t101 *, t303 , t303 , const MethodInfo*))m11608_gshared)(__this, p0, p1, method)
extern "C" t14 * m11609_gshared (t101 * __this, t303  p0, t303  p1, t182 * p2, t14 * p3, const MethodInfo* method);
#define m11609(__this, p0, p1, p2, p3, method) (( t14 * (*) (t101 *, t303 , t303 , t182 *, t14 *, const MethodInfo*))m11609_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m11610_gshared (t101 * __this, t14 * p0, const MethodInfo* method);
#define m11610(__this, p0, method) (( int32_t (*) (t101 *, t14 *, const MethodInfo*))m11610_gshared)(__this, p0, method)

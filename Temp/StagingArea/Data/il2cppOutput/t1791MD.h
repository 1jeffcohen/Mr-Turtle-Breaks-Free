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

struct t1791;
struct t14;
struct t181;
struct t182;

#include "codegen/il2cpp-codegen.h"
#include "t196.h"
#include "t1782.h"

extern "C" void m11450_gshared (t1791 * __this, t14 * p0, t196 p1, const MethodInfo* method);
#define m11450(__this, p0, p1, method) (( void (*) (t1791 *, t14 *, t196, const MethodInfo*))m11450_gshared)(__this, p0, p1, method)
extern "C" t1782  m11451_gshared (t1791 * __this, int32_t p0, t14 * p1, const MethodInfo* method);
#define m11451(__this, p0, p1, method) (( t1782  (*) (t1791 *, int32_t, t14 *, const MethodInfo*))m11451_gshared)(__this, p0, p1, method)
extern "C" t14 * m11452_gshared (t1791 * __this, int32_t p0, t14 * p1, t182 * p2, t14 * p3, const MethodInfo* method);
#define m11452(__this, p0, p1, p2, p3, method) (( t14 * (*) (t1791 *, int32_t, t14 *, t182 *, t14 *, const MethodInfo*))m11452_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1782  m11453_gshared (t1791 * __this, t14 * p0, const MethodInfo* method);
#define m11453(__this, p0, method) (( t1782  (*) (t1791 *, t14 *, const MethodInfo*))m11453_gshared)(__this, p0, method)

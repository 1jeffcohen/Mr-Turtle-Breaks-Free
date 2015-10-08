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

struct t1985;
struct t14;

#include "codegen/il2cpp-codegen.h"

extern "C" void m14210_gshared (t1985 * __this, const MethodInfo* method);
#define m14210(__this, method) (( void (*) (t1985 *, const MethodInfo*))m14210_gshared)(__this, method)
extern "C" void m14211_gshared (t14 * __this , const MethodInfo* method);
#define m14211(__this , method) (( void (*) (t14 * , const MethodInfo*))m14211_gshared)(__this , method)
extern "C" int32_t m14212_gshared (t1985 * __this, t14 * p0, t14 * p1, const MethodInfo* method);
#define m14212(__this, p0, p1, method) (( int32_t (*) (t1985 *, t14 *, t14 *, const MethodInfo*))m14212_gshared)(__this, p0, p1, method)
extern "C" t1985 * m14213_gshared (t14 * __this , const MethodInfo* method);
#define m14213(__this , method) (( t1985 * (*) (t14 * , const MethodInfo*))m14213_gshared)(__this , method)

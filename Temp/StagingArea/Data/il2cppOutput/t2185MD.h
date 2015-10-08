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

struct t2185;
struct t14;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16306_gshared (t2185 * __this, const MethodInfo* method);
#define m16306(__this, method) (( void (*) (t2185 *, const MethodInfo*))m16306_gshared)(__this, method)
extern "C" void m16307_gshared (t14 * __this , const MethodInfo* method);
#define m16307(__this , method) (( void (*) (t14 * , const MethodInfo*))m16307_gshared)(__this , method)
extern "C" int32_t m16308_gshared (t2185 * __this, t14 * p0, t14 * p1, const MethodInfo* method);
#define m16308(__this, p0, p1, method) (( int32_t (*) (t2185 *, t14 *, t14 *, const MethodInfo*))m16308_gshared)(__this, p0, p1, method)
extern "C" t2185 * m16309_gshared (t14 * __this , const MethodInfo* method);
#define m16309(__this , method) (( t2185 * (*) (t14 * , const MethodInfo*))m16309_gshared)(__this , method)

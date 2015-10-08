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

struct t2160;
struct t14;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16060_gshared (t2160 * __this, const MethodInfo* method);
#define m16060(__this, method) (( void (*) (t2160 *, const MethodInfo*))m16060_gshared)(__this, method)
extern "C" int32_t m16061_gshared (t2160 * __this, t14 * p0, const MethodInfo* method);
#define m16061(__this, p0, method) (( int32_t (*) (t2160 *, t14 *, const MethodInfo*))m16061_gshared)(__this, p0, method)
extern "C" bool m16062_gshared (t2160 * __this, t14 * p0, t14 * p1, const MethodInfo* method);
#define m16062(__this, p0, p1, method) (( bool (*) (t2160 *, t14 *, t14 *, const MethodInfo*))m16062_gshared)(__this, p0, p1, method)

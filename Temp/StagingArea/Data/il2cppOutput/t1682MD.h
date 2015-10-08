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

struct t1682;

#include "codegen/il2cpp-codegen.h"
#include "t630.h"

extern "C" void m10132_gshared (t1682 * __this, const MethodInfo* method);
#define m10132(__this, method) (( void (*) (t1682 *, const MethodInfo*))m10132_gshared)(__this, method)
extern "C" int32_t m16680_gshared (t1682 * __this, t630  p0, const MethodInfo* method);
#define m16680(__this, p0, method) (( int32_t (*) (t1682 *, t630 , const MethodInfo*))m16680_gshared)(__this, p0, method)
extern "C" bool m16681_gshared (t1682 * __this, t630  p0, t630  p1, const MethodInfo* method);
#define m16681(__this, p0, p1, method) (( bool (*) (t1682 *, t630 , t630 , const MethodInfo*))m16681_gshared)(__this, p0, p1, method)

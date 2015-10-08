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

struct t2186;

#include "codegen/il2cpp-codegen.h"
#include "t1222.h"

extern "C" void m16310_gshared (t2186 * __this, const MethodInfo* method);
#define m16310(__this, method) (( void (*) (t2186 *, const MethodInfo*))m16310_gshared)(__this, method)
extern "C" int32_t m16311_gshared (t2186 * __this, t1222  p0, t1222  p1, const MethodInfo* method);
#define m16311(__this, p0, p1, method) (( int32_t (*) (t2186 *, t1222 , t1222 , const MethodInfo*))m16311_gshared)(__this, p0, p1, method)

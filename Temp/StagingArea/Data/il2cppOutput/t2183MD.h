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

struct t2183;

#include "codegen/il2cpp-codegen.h"
#include "t1222.h"

extern "C" void m16299_gshared (t2183 * __this, const MethodInfo* method);
#define m16299(__this, method) (( void (*) (t2183 *, const MethodInfo*))m16299_gshared)(__this, method)
extern "C" int32_t m16300_gshared (t2183 * __this, t1222  p0, const MethodInfo* method);
#define m16300(__this, p0, method) (( int32_t (*) (t2183 *, t1222 , const MethodInfo*))m16300_gshared)(__this, p0, method)
extern "C" bool m16301_gshared (t2183 * __this, t1222  p0, t1222  p1, const MethodInfo* method);
#define m16301(__this, p0, p1, method) (( bool (*) (t2183 *, t1222 , t1222 , const MethodInfo*))m16301_gshared)(__this, p0, p1, method)

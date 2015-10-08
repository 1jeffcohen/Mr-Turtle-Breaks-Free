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

struct t1685;

#include "codegen/il2cpp-codegen.h"
#include "t1558.h"

extern "C" void m10138_gshared (t1685 * __this, const MethodInfo* method);
#define m10138(__this, method) (( void (*) (t1685 *, const MethodInfo*))m10138_gshared)(__this, method)
extern "C" int32_t m16711_gshared (t1685 * __this, t1558  p0, t1558  p1, const MethodInfo* method);
#define m16711(__this, p0, p1, method) (( int32_t (*) (t1685 *, t1558 , t1558 , const MethodInfo*))m16711_gshared)(__this, p0, p1, method)

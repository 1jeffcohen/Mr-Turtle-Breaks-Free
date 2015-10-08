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

struct t2230;

#include "codegen/il2cpp-codegen.h"
#include "t1558.h"

extern "C" void m16725_gshared (t2230 * __this, const MethodInfo* method);
#define m16725(__this, method) (( void (*) (t2230 *, const MethodInfo*))m16725_gshared)(__this, method)
extern "C" int32_t m16726_gshared (t2230 * __this, t1558  p0, const MethodInfo* method);
#define m16726(__this, p0, method) (( int32_t (*) (t2230 *, t1558 , const MethodInfo*))m16726_gshared)(__this, p0, method)
extern "C" bool m16727_gshared (t2230 * __this, t1558  p0, t1558  p1, const MethodInfo* method);
#define m16727(__this, p0, p1, method) (( bool (*) (t2230 *, t1558 , t1558 , const MethodInfo*))m16727_gshared)(__this, p0, p1, method)

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

struct t2226;

#include "codegen/il2cpp-codegen.h"
#include "t1539.h"

extern "C" void m16704_gshared (t2226 * __this, const MethodInfo* method);
#define m16704(__this, method) (( void (*) (t2226 *, const MethodInfo*))m16704_gshared)(__this, method)
extern "C" int32_t m16705_gshared (t2226 * __this, t1539  p0, const MethodInfo* method);
#define m16705(__this, p0, method) (( int32_t (*) (t2226 *, t1539 , const MethodInfo*))m16705_gshared)(__this, p0, method)
extern "C" bool m16706_gshared (t2226 * __this, t1539  p0, t1539  p1, const MethodInfo* method);
#define m16706(__this, p0, p1, method) (( bool (*) (t2226 *, t1539 , t1539 , const MethodInfo*))m16706_gshared)(__this, p0, p1, method)

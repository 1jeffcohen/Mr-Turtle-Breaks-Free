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

struct t1983;

#include "codegen/il2cpp-codegen.h"
#include "t310.h"

extern "C" void m14203_gshared (t1983 * __this, const MethodInfo* method);
#define m14203(__this, method) (( void (*) (t1983 *, const MethodInfo*))m14203_gshared)(__this, method)
extern "C" int32_t m14204_gshared (t1983 * __this, t310  p0, const MethodInfo* method);
#define m14204(__this, p0, method) (( int32_t (*) (t1983 *, t310 , const MethodInfo*))m14204_gshared)(__this, p0, method)
extern "C" bool m14205_gshared (t1983 * __this, t310  p0, t310  p1, const MethodInfo* method);
#define m14205(__this, p0, p1, method) (( bool (*) (t1983 *, t310 , t310 , const MethodInfo*))m14205_gshared)(__this, p0, p1, method)

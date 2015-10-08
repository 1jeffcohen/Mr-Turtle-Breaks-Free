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

struct t1683;

#include "codegen/il2cpp-codegen.h"
#include "t1539.h"

extern "C" void m10133_gshared (t1683 * __this, const MethodInfo* method);
#define m10133(__this, method) (( void (*) (t1683 *, const MethodInfo*))m10133_gshared)(__this, method)
extern "C" int32_t m16690_gshared (t1683 * __this, t1539  p0, t1539  p1, const MethodInfo* method);
#define m16690(__this, p0, p1, method) (( int32_t (*) (t1683 *, t1539 , t1539 , const MethodInfo*))m16690_gshared)(__this, p0, p1, method)

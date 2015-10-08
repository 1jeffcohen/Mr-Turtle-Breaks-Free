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

struct t1975;

#include "codegen/il2cpp-codegen.h"
#include "t3.h"

extern "C" void m14064_gshared (t1975 * __this, const MethodInfo* method);
#define m14064(__this, method) (( void (*) (t1975 *, const MethodInfo*))m14064_gshared)(__this, method)
extern "C" int32_t m14065_gshared (t1975 * __this, t3  p0, t3  p1, const MethodInfo* method);
#define m14065(__this, p0, p1, method) (( int32_t (*) (t1975 *, t3 , t3 , const MethodInfo*))m14065_gshared)(__this, p0, p1, method)

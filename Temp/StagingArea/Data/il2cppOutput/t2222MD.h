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

struct t2222;

#include "codegen/il2cpp-codegen.h"
#include "t630.h"

extern "C" void m16687_gshared (t2222 * __this, const MethodInfo* method);
#define m16687(__this, method) (( void (*) (t2222 *, const MethodInfo*))m16687_gshared)(__this, method)
extern "C" int32_t m16688_gshared (t2222 * __this, t630  p0, const MethodInfo* method);
#define m16688(__this, p0, method) (( int32_t (*) (t2222 *, t630 , const MethodInfo*))m16688_gshared)(__this, p0, method)
extern "C" bool m16689_gshared (t2222 * __this, t630  p0, t630  p1, const MethodInfo* method);
#define m16689(__this, p0, p1, method) (( bool (*) (t2222 *, t630 , t630 , const MethodInfo*))m16689_gshared)(__this, p0, p1, method)

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

struct t2088;
struct t19;
struct t19_marshaled;
struct t533;
struct t14;
struct t322;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15367_gshared (t2088 * __this, t19 * p0, t533 * p1, t14 * p2, const MethodInfo* method);
#define m15367(__this, p0, p1, p2, method) (( void (*) (t2088 *, t19 *, t533 *, t14 *, const MethodInfo*))m15367_gshared)(__this, p0, p1, p2, method)
extern "C" void m15368_gshared (t2088 * __this, t322* p0, const MethodInfo* method);
#define m15368(__this, p0, method) (( void (*) (t2088 *, t322*, const MethodInfo*))m15368_gshared)(__this, p0, method)

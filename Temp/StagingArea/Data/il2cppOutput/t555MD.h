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

struct t555;
struct t19;
struct t19_marshaled;
struct t533;
struct t322;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2893_gshared (t555 * __this, t19 * p0, t533 * p1, int32_t p2, const MethodInfo* method);
#define m2893(__this, p0, p1, p2, method) (( void (*) (t555 *, t19 *, t533 *, int32_t, const MethodInfo*))m2893_gshared)(__this, p0, p1, p2, method)
extern "C" void m15370_gshared (t555 * __this, t322* p0, const MethodInfo* method);
#define m15370(__this, p0, method) (( void (*) (t555 *, t322*, const MethodInfo*))m15370_gshared)(__this, p0, method)

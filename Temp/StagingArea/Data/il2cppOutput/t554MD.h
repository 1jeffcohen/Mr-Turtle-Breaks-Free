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

struct t554;
struct t19;
struct t19_marshaled;
struct t533;
struct t322;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2892_gshared (t554 * __this, t19 * p0, t533 * p1, float p2, const MethodInfo* method);
#define m2892(__this, p0, p1, p2, method) (( void (*) (t554 *, t19 *, t533 *, float, const MethodInfo*))m2892_gshared)(__this, p0, p1, p2, method)
extern "C" void m15369_gshared (t554 * __this, t322* p0, const MethodInfo* method);
#define m15369(__this, p0, method) (( void (*) (t554 *, t322*, const MethodInfo*))m15369_gshared)(__this, p0, method)

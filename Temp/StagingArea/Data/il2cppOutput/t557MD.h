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

struct t557;
struct t19;
struct t19_marshaled;
struct t533;
struct t322;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2895_gshared (t557 * __this, t19 * p0, t533 * p1, bool p2, const MethodInfo* method);
#define m2895(__this, p0, p1, p2, method) (( void (*) (t557 *, t19 *, t533 *, bool, const MethodInfo*))m2895_gshared)(__this, p0, p1, p2, method)
extern "C" void m15376_gshared (t557 * __this, t322* p0, const MethodInfo* method);
#define m15376(__this, p0, method) (( void (*) (t557 *, t322*, const MethodInfo*))m15376_gshared)(__this, p0, method)

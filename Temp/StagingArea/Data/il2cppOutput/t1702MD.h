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

struct t1702;
struct t14;

#include "codegen/il2cpp-codegen.h"

extern "C" void m10350_gshared (t1702 * __this, const MethodInfo* method);
#define m10350(__this, method) (( void (*) (t1702 *, const MethodInfo*))m10350_gshared)(__this, method)
extern "C" int32_t m10351_gshared (t1702 * __this, t14 * p0, t14 * p1, const MethodInfo* method);
#define m10351(__this, p0, p1, method) (( int32_t (*) (t1702 *, t14 *, t14 *, const MethodInfo*))m10351_gshared)(__this, p0, p1, method)

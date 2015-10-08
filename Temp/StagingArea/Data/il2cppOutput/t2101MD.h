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

struct t2101;
struct t533;
struct t15;
struct t14;
struct t509;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15562_gshared (t2101 * __this, const MethodInfo* method);
#define m15562(__this, method) (( void (*) (t2101 *, const MethodInfo*))m15562_gshared)(__this, method)
extern "C" t533 * m15563_gshared (t2101 * __this, t15* p0, t14 * p1, const MethodInfo* method);
#define m15563(__this, p0, p1, method) (( t533 * (*) (t2101 *, t15*, t14 *, const MethodInfo*))m15563_gshared)(__this, p0, p1, method)
extern "C" t509 * m15564_gshared (t2101 * __this, t14 * p0, t533 * p1, const MethodInfo* method);
#define m15564(__this, p0, p1, method) (( t509 * (*) (t2101 *, t14 *, t533 *, const MethodInfo*))m15564_gshared)(__this, p0, p1, method)

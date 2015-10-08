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

struct t2100;
struct t533;
struct t15;
struct t14;
struct t509;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15559_gshared (t2100 * __this, const MethodInfo* method);
#define m15559(__this, method) (( void (*) (t2100 *, const MethodInfo*))m15559_gshared)(__this, method)
extern "C" t533 * m15560_gshared (t2100 * __this, t15* p0, t14 * p1, const MethodInfo* method);
#define m15560(__this, p0, p1, method) (( t533 * (*) (t2100 *, t15*, t14 *, const MethodInfo*))m15560_gshared)(__this, p0, p1, method)
extern "C" t509 * m15561_gshared (t2100 * __this, t14 * p0, t533 * p1, const MethodInfo* method);
#define m15561(__this, p0, p1, method) (( t509 * (*) (t2100 *, t14 *, t533 *, const MethodInfo*))m15561_gshared)(__this, p0, p1, method)

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

struct t2102;
struct t533;
struct t15;
struct t14;
struct t509;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15565_gshared (t2102 * __this, const MethodInfo* method);
#define m15565(__this, method) (( void (*) (t2102 *, const MethodInfo*))m15565_gshared)(__this, method)
extern "C" t533 * m15566_gshared (t2102 * __this, t15* p0, t14 * p1, const MethodInfo* method);
#define m15566(__this, p0, p1, method) (( t533 * (*) (t2102 *, t15*, t14 *, const MethodInfo*))m15566_gshared)(__this, p0, p1, method)
extern "C" t509 * m15567_gshared (t2102 * __this, t14 * p0, t533 * p1, const MethodInfo* method);
#define m15567(__this, p0, p1, method) (( t509 * (*) (t2102 *, t14 *, t533 *, const MethodInfo*))m15567_gshared)(__this, p0, p1, method)

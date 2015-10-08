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

struct t2202;
struct t14;
struct t181;
struct t182;

#include "codegen/il2cpp-codegen.h"
#include "t196.h"

extern "C" void m16509_gshared (t2202 * __this, t14 * p0, t196 p1, const MethodInfo* method);
#define m16509(__this, p0, p1, method) (( void (*) (t2202 *, t14 *, t196, const MethodInfo*))m16509_gshared)(__this, p0, p1, method)
extern "C" t14 * m16510_gshared (t2202 * __this, const MethodInfo* method);
#define m16510(__this, method) (( t14 * (*) (t2202 *, const MethodInfo*))m16510_gshared)(__this, method)
extern "C" t14 * m16511_gshared (t2202 * __this, t182 * p0, t14 * p1, const MethodInfo* method);
#define m16511(__this, p0, p1, method) (( t14 * (*) (t2202 *, t182 *, t14 *, const MethodInfo*))m16511_gshared)(__this, p0, p1, method)
extern "C" t14 * m16512_gshared (t2202 * __this, t14 * p0, const MethodInfo* method);
#define m16512(__this, p0, method) (( t14 * (*) (t2202 *, t14 *, const MethodInfo*))m16512_gshared)(__this, p0, method)

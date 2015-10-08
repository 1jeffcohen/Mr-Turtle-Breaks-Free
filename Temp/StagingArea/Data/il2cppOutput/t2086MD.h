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

struct t2086;
struct t14;
struct t533;
struct t322;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15360_gshared (t2086 * __this, t14 * p0, t533 * p1, const MethodInfo* method);
#define m15360(__this, p0, p1, method) (( void (*) (t2086 *, t14 *, t533 *, const MethodInfo*))m15360_gshared)(__this, p0, p1, method)
extern "C" void m15361_gshared (t2086 * __this, t322* p0, const MethodInfo* method);
#define m15361(__this, p0, method) (( void (*) (t2086 *, t322*, const MethodInfo*))m15361_gshared)(__this, p0, method)
extern "C" bool m15362_gshared (t2086 * __this, t14 * p0, t533 * p1, const MethodInfo* method);
#define m15362(__this, p0, p1, method) (( bool (*) (t2086 *, t14 *, t533 *, const MethodInfo*))m15362_gshared)(__this, p0, p1, method)

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

struct t2227;
struct t14;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16712_gshared (t2227 * __this, const MethodInfo* method);
#define m16712(__this, method) (( void (*) (t2227 *, const MethodInfo*))m16712_gshared)(__this, method)
extern "C" void m16713_gshared (t14 * __this , const MethodInfo* method);
#define m16713(__this , method) (( void (*) (t14 * , const MethodInfo*))m16713_gshared)(__this , method)
extern "C" int32_t m16714_gshared (t2227 * __this, t14 * p0, t14 * p1, const MethodInfo* method);
#define m16714(__this, p0, p1, method) (( int32_t (*) (t2227 *, t14 *, t14 *, const MethodInfo*))m16714_gshared)(__this, p0, p1, method)
extern "C" t2227 * m16715_gshared (t14 * __this , const MethodInfo* method);
#define m16715(__this , method) (( t2227 * (*) (t14 * , const MethodInfo*))m16715_gshared)(__this , method)

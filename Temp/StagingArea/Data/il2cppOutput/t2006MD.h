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

struct t2006;
struct t14;

#include "codegen/il2cpp-codegen.h"

extern "C" void m14504_gshared (t2006 * __this, const MethodInfo* method);
#define m14504(__this, method) (( void (*) (t2006 *, const MethodInfo*))m14504_gshared)(__this, method)
extern "C" void m14505_gshared (t14 * __this , const MethodInfo* method);
#define m14505(__this , method) (( void (*) (t14 * , const MethodInfo*))m14505_gshared)(__this , method)
extern "C" int32_t m14506_gshared (t2006 * __this, t14 * p0, t14 * p1, const MethodInfo* method);
#define m14506(__this, p0, p1, method) (( int32_t (*) (t2006 *, t14 *, t14 *, const MethodInfo*))m14506_gshared)(__this, p0, p1, method)
extern "C" t2006 * m14507_gshared (t14 * __this , const MethodInfo* method);
#define m14507(__this , method) (( t2006 * (*) (t14 * , const MethodInfo*))m14507_gshared)(__this , method)

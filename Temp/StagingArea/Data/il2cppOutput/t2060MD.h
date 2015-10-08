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

struct t2060;
struct t14;
struct t181;
struct t182;

#include "codegen/il2cpp-codegen.h"
#include "t196.h"
#include "t371.h"

extern "C" void m15055_gshared (t2060 * __this, t14 * p0, t196 p1, const MethodInfo* method);
#define m15055(__this, p0, p1, method) (( void (*) (t2060 *, t14 *, t196, const MethodInfo*))m15055_gshared)(__this, p0, p1, method)
extern "C" int32_t m15056_gshared (t2060 * __this, t371  p0, t371  p1, const MethodInfo* method);
#define m15056(__this, p0, p1, method) (( int32_t (*) (t2060 *, t371 , t371 , const MethodInfo*))m15056_gshared)(__this, p0, p1, method)
extern "C" t14 * m15057_gshared (t2060 * __this, t371  p0, t371  p1, t182 * p2, t14 * p3, const MethodInfo* method);
#define m15057(__this, p0, p1, p2, p3, method) (( t14 * (*) (t2060 *, t371 , t371 , t182 *, t14 *, const MethodInfo*))m15057_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m15058_gshared (t2060 * __this, t14 * p0, const MethodInfo* method);
#define m15058(__this, p0, method) (( int32_t (*) (t2060 *, t14 *, const MethodInfo*))m15058_gshared)(__this, p0, method)

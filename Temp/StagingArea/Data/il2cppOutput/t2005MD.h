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

struct t2005;
struct t14;
struct t181;
struct t182;

#include "codegen/il2cpp-codegen.h"
#include "t196.h"
#include "t272.h"

extern "C" void m14500_gshared (t2005 * __this, t14 * p0, t196 p1, const MethodInfo* method);
#define m14500(__this, p0, p1, method) (( void (*) (t2005 *, t14 *, t196, const MethodInfo*))m14500_gshared)(__this, p0, p1, method)
extern "C" bool m14501_gshared (t2005 * __this, t272  p0, const MethodInfo* method);
#define m14501(__this, p0, method) (( bool (*) (t2005 *, t272 , const MethodInfo*))m14501_gshared)(__this, p0, method)
extern "C" t14 * m14502_gshared (t2005 * __this, t272  p0, t182 * p1, t14 * p2, const MethodInfo* method);
#define m14502(__this, p0, p1, p2, method) (( t14 * (*) (t2005 *, t272 , t182 *, t14 *, const MethodInfo*))m14502_gshared)(__this, p0, p1, p2, method)
extern "C" bool m14503_gshared (t2005 * __this, t14 * p0, const MethodInfo* method);
#define m14503(__this, p0, method) (( bool (*) (t2005 *, t14 *, const MethodInfo*))m14503_gshared)(__this, p0, method)

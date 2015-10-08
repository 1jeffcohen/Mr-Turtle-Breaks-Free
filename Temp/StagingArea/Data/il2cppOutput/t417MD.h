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

struct t417;
struct t417_marshaled;
struct t15;
struct t331;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2104 (t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2105 (t14 * __this , t417 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t417 * m2106 (t14 * __this , t15* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t417 * m2107 (t14 * __this , t331 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t417 * m2108 (t14 * __this , t331 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t417_marshal(const t417& unmarshaled, t417_marshaled& marshaled);
extern "C" void t417_marshal_back(const t417_marshaled& marshaled, t417& unmarshaled);
extern "C" void t417_marshal_cleanup(t417_marshaled& marshaled);

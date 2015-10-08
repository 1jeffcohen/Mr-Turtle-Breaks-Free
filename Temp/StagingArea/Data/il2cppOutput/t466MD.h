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

struct t466;
struct t466_marshaled;
struct t14;

#include "codegen/il2cpp-codegen.h"

extern "C" bool m2773 (t466 * __this, t14 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m2774 (t466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m2775 (t14 * __this , t466 * p0, t466 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t466_marshal(const t466& unmarshaled, t466_marshaled& marshaled);
extern "C" void t466_marshal_back(const t466_marshaled& marshaled, t466& unmarshaled);
extern "C" void t466_marshal_cleanup(t466_marshaled& marshaled);

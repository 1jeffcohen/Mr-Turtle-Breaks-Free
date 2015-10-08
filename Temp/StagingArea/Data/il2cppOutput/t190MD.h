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

struct t190;
struct t190_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2101 (t190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2102 (t190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2103 (t190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t190_marshal(const t190& unmarshaled, t190_marshaled& marshaled);
extern "C" void t190_marshal_back(const t190_marshaled& marshaled, t190& unmarshaled);
extern "C" void t190_marshal_cleanup(t190_marshaled& marshaled);

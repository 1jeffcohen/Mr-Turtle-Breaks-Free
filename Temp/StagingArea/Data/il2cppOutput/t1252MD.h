﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct t15;

#include "codegen/il2cpp-codegen.h"
#include "t1252.h"

extern "C" void m7791 (t1252 * __this, t15* p0, int64_t p1, int32_t p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t1252_marshal(const t1252& unmarshaled, t1252_marshaled& marshaled);
extern "C" void t1252_marshal_back(const t1252_marshaled& marshaled, t1252& unmarshaled);
extern "C" void t1252_marshal_cleanup(t1252_marshaled& marshaled);

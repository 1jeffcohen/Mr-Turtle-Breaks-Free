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


#include "codegen/il2cpp-codegen.h"

extern "C" void t1136_marshal(const t1136& unmarshaled, t1136_marshaled& marshaled);
extern "C" void t1136_marshal_back(const t1136_marshaled& marshaled, t1136& unmarshaled);
extern "C" void t1136_marshal_cleanup(t1136_marshaled& marshaled);

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

extern "C" void t468_marshal(const t468& unmarshaled, t468_marshaled& marshaled);
extern "C" void t468_marshal_back(const t468_marshaled& marshaled, t468& unmarshaled);
extern "C" void t468_marshal_cleanup(t468_marshaled& marshaled);

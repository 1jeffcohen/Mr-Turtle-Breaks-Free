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

extern "C" void t437_marshal(const t437& unmarshaled, t437_marshaled& marshaled);
extern "C" void t437_marshal_back(const t437_marshaled& marshaled, t437& unmarshaled);
extern "C" void t437_marshal_cleanup(t437_marshaled& marshaled);

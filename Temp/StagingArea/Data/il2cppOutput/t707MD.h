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

extern "C" void t707_marshal(const t707& unmarshaled, t707_marshaled& marshaled);
extern "C" void t707_marshal_back(const t707_marshaled& marshaled, t707& unmarshaled);
extern "C" void t707_marshal_cleanup(t707_marshaled& marshaled);

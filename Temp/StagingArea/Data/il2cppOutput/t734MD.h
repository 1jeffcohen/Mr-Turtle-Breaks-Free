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

extern "C" void t734_marshal(const t734& unmarshaled, t734_marshaled& marshaled);
extern "C" void t734_marshal_back(const t734_marshaled& marshaled, t734& unmarshaled);
extern "C" void t734_marshal_cleanup(t734_marshaled& marshaled);

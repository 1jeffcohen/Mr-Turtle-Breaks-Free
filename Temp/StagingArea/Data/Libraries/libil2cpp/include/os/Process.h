#pragma once

namespace il2cpp
{
namespace os
{

struct ProcessHandle;

class Process
{
public:
	static int GetCurrentProcessId();
	static ProcessHandle* GetProcess(int processId);
	static void FreeProcess(ProcessHandle* handle);
};

}
}

#include "syscall.h"

int delete_module(const char *name)
{
	return syscall(SYS_delete_module, name);
}

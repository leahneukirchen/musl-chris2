#include "syscall.h"

int init_module(const char *name, void *image)
{
	return syscall(SYS_init_module, name, image);
}

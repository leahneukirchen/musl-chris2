#include <stddef.h>
#include "syscall.h"

int query_module(const char *name, int which, void *buf, size_t bufsize, size_t *ret)
{
	return syscall(SYS_query_module, name, which, buf, bufsize, ret);
}

#include "syscall.h"
#include "libc.h"

int flock(int fd, int operation)
{
	return syscall(SYS_flock, fd, operation);
}

#include <sys/timex.h>
#include "syscall.h"

int adjtimex(struct timex *buf)
{
	return syscall(SYS_adjtimex, buf);
}

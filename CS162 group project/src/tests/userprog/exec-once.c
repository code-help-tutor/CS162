WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/* Executes and waits for a single child process. */

#include <syscall.h>
#include "tests/lib.h"
#include "tests/main.h"

void test_main(void) { wait(exec("child-simple")); }

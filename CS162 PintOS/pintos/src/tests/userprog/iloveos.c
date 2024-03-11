WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/* Tests the null syscall */

#include "tests/lib.h"
#include "tests/main.h"
#include <string.h>

void
test_main (void)
{
  char *msg = "I love CS162\n";
  write(1, msg, strlen(msg));
}

WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/* Tries to create a directory named as the empty string,
   which must return failure. */

#include <syscall.h>
#include "tests/lib.h"
#include "tests/main.h"

void
test_main (void)
{
  CHECK (!mkdir (""), "mkdir \"\" (must return false)");
}

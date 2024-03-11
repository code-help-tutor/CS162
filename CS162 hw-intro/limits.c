WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#include <stdio.h>
#include <sys/resource.h>

int main() {
    struct rlimit lim;
    printf("stack size: %ld\n", 0L);
    printf("process limit: %ld\n", 0L);
    printf("max file descriptors: %ld\n", 0L);
    return 0;
}

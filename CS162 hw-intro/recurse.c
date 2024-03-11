WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#include <stdio.h>

int recur(int i) {
    printf("i is %i. Address of i is %p\n", i, &i);

    if (i > 0) {
        return recur(i - 1);
    }

    return 0;
}

#include <stdio.h>

int fn() {
    printf("%s called from static library \n",__FUNCTION__ );
    return 0;
}
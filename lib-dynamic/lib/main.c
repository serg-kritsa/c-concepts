#include <stdio.h>

int fn() {
    printf("%s called from dynamic library \n",__FUNCTION__ );
    return 0;
}
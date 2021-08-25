#include <stdio.h>

#define WARNING(...) fprintf(stderr, __VA_ARGS__)


int main() {
    WARNING("%s world \n", "Hello");

    return 0;
}

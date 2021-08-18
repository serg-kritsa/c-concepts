#include <stdio.h>

int count;
extern void write_extern(void);

int main(void) {
    count = 55;
    write_extern();
    return 0;
}
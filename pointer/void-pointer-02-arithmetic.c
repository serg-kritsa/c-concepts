#include <stdio.h>
#include <string.h>

int main() {
    int ivalues[3] = {10, 20, 30};
    void* vp = &ivalues[1]; // addr of 20
    vp += sizeof(int);
    printf("%d ", *(int*)vp); // 30
    printf("\n ");

    return 0;
}
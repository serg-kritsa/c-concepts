#include <stdio.h>
#include <string.h>

void void_ptr_demo();

int main() {
    void_ptr_demo();

    return 0;
}
void void_ptr_demo(){
    int i = 100;
    float f = 12.3;
    char c = 'a';
    void *vp = NULL; // any type pointer

    // int* ip; vp = ip; // allowed
    // float* fp; vp = fp; // allowed

    vp = &i;
    printf("%d ", *(int*)vp);
    vp = &f;
    printf("%f ", *(float*)vp);
    vp = &c;
    printf("%c ", *(char*)vp);
    printf("\n");
}

#include <stdio.h>
#include <malloc.h>
#include <string.h>

void fn0(char* ptr){
    printf("%s: =%u \t is passed address \n", __FUNCTION__, ptr); 
    ptr = malloc(255); // allocate memory in heap for local inner copy
    printf("%s: =%u \t is local address assigned from malloc \n", __FUNCTION__, ptr);
    strcpy(ptr, "Hello world");
}
void fn1(char** ptr){
    printf("%s: =%u \t is passed address of double pointer \n", __FUNCTION__, *ptr);
    *ptr = malloc(255); // allocate memory in heap for local inner copy
    printf("%s: =%u \t is local address assigned to dereferenced double pointer from malloc \n", __FUNCTION__, *ptr);
    strcpy(*ptr, "Hello world");
}

int main() {
    char *ptr = NULL;
    printf("%s: =%u \n", __FUNCTION__, ptr);
    fn0(ptr); // passed pointer
    printf("%s: =%u \n", __FUNCTION__, ptr); // 0

    fn1(&ptr); // passed address
    printf("main() =%s \n", ptr); // Hello world

    free(ptr);

    return 0;
}
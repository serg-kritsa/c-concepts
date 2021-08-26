#include <stdio.h>
#include <malloc.h>

void fn0(int* ptr){
    int a = 5;
    ptr = &a; // local change
}
void fn1(int* ptr){
    int a = 5;
    *ptr = a; // dereferencing of pointer & setting value
}
void fn2(int** ptr){ // receive as double pointer
    int a = 50;
    *ptr = &a; // dereferencing of double pointer & setting address
}
int* localVarAddrAvailableFromOutsideFn(){
    int a = 5;
    int* ip = &a;
    return ip;
}

int main() {
    int *ptr = NULL;
    ptr = (int*) malloc(sizeof(int));
    *ptr = 10;
    fn0(ptr);
    printf("=%d \t", *ptr); // 10
    fn1(ptr);
    printf("=%d \t", *ptr); // 5
    fn2(&ptr); // pass address
    printf("=%d \t", *ptr); // 50
    printf("\n");
    int* ip = localVarAddrAvailableFromOutsideFn();
    printf("addr=%u v=%u \t", ip, *ip); // 
    printf("\n");

    return 0;
}
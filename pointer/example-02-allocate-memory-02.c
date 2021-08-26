#include <stdio.h>
#include <malloc.h>

void allocateMemory( int * ptr) { // single pointer
   ptr = (int *) malloc(sizeof(int)); // allocate some memory
}
void allocateMemory2( int ** ptr) { // double pointer
   *ptr = (int *) malloc(sizeof(int)); // allocate some memory
}
void notWorkingDoublePointerExample(int * ptr){
   allocateMemory(ptr); // pass pointer
}
void workingDoublePointerExample(int * ptr){
   allocateMemory2(&ptr); // pass address
}

int main(){
   int *ptr = NULL;

   // notWorkingDoublePointerExample(ptr);
   workingDoublePointerExample(ptr);
   *ptr = 20;

   printf("%d\n", *ptr);

   // free up the memory
   free(ptr);
   return 0;
}
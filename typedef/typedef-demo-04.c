#include <stdio.h>

#define int_pointer int *
int_pointer chalk, cheese; // int *chalk, cheese // SUBSTITUTION


typedef char *char_ptr;
char_ptr Bently, Rolls_Royce; // char *Bently, char *Rolls_Royce;


typedef int (*ptr_to_int_fun)(void);
int main( ) {
   printf("\n");
   char *p; // 67
   // printf("p=%d ", p);
   // printf("*p=%d", *p);
   printf("\t");
   printf("%d ", (ptr_to_int_fun) p); // the char *p is casted to int *p
   printf("%d \n ", (int*) p); // the char *p is casted to int *p

   return 0;
}

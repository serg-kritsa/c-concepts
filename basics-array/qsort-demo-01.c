#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

//  void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*))
int compare_ints(void const *p1, void const *p2) {
  const int i1 = * (const int *) p1;
  const int i2 = * (const int *) p2;
  return i1 - i2;
  // -1 then i1 should follow i2
  //  1 then the second should follow the first
};
void print_arr(int arr[]){
  for(int n = 0 ; n < SIZE; n++ ) {printf("%d ", arr[n]);}
  printf("\n");
}
void print_arr_by_ptr(int* arr){
  for(int n = 0 ; n < SIZE; n++ ) {printf("%d ", arr[n]);}
  printf("\n");
}
int main() {
  int data[SIZE] = {19,6,17,5,1};
  printf("Before sorting the list is: \n");
  print_arr_by_ptr(data);

  qsort(data, SIZE, sizeof(int), compare_ints);

  printf("After sorting the list is: \n");
  print_arr(data);
    
  return 0;
}
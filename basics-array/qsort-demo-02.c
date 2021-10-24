#include <stdio.h>
#include <stdlib.h>

//  void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*))

struct other_data {};
typedef struct {
  int key;
  struct other_data;
} record;

int record_compare(void const* a, void const* b) {
  return ( ((record*) a)->key - ((record *) b)->key );
};
int main() {
  int values[3] = {9,6,3};
  int length = sizeof(values)/sizeof(*values);
  // printf("%d / %d = %d \n", sizeof(values), sizeof(*values), length );
  int* ip = values;
  printf("Before sorting the list is: \n");
  for(int n=0; n<length; n++){printf("%d ", values[n]);}
  printf("\n");

  qsort(values, length, sizeof(record), record_compare);

  printf("After sorting the list is: \n");
  for(int n = 0 ; n < length; n++ ) {printf("%d ", values[n]);}
  printf("\n");
  
  return 0;
}
#include <stdio.h>

union mixed {
    char c;
    int i;
    float f;
};

union number {
    int x;
    double y;
};

void secondAssignmentAlwaysNotCorrupted02(){
    union mixed x1, x2, x3, x4;
    x1.c = 'q';
    printf("%c \n ", x1.c); // works // q
    x2.f = 1.23;
    printf("%f \n ", x2.f); // works // 1.230000 
    x3.c = 'q'; x3.f = 1.23;
    printf("%c \t %f \n ", x3.c, x3.f); // works float, char corrupted // □       1.230000
    x3.f = 1.23;
    x3.c = 'q';
    printf("%c \t %f \n ", x3.c, x3.f); // works char, float corrupted // q       1.229994
}
void secondAssignmentAlwaysNotCorrupted01(){
    union number a1;
    a1.x = 369; a1.y = 963.0; // y stored
    printf("\t integer x=%d \t double y=%f \n", a1.x, a1.y);
    a1.y = 555.0; a1.x = 741; // both stored
    printf("\t integer x=%d \t double y=%f \n", a1.x, a1.y);
}
void initFirstValue(){
    union number a2 = { 12 }; // specify 1st type 
    // union number a2 = { .x=12 }; // specify 1st type 
    // union number a2 = { 12.34 }; // incorrect 
}
int main( ) {
    secondAssignmentAlwaysNotCorrupted01();
    initFirstValue();
    secondAssignmentAlwaysNotCorrupted02();

    return 0;
}
#include <stdio.h>
union Data {
    int i;
    float f;
} data1, data2, *data3; // global

union bigData {
    int i;
    float f;
    char str[20];
};

int main( ) {
    union Data d1, d2, *d3;
    printf("Memory size occupied by data: %zu \n", sizeof(d1) ); // 4

    union bigData bd1, bd2, *bd3;
    printf("Memory size occupied by bigdata: %zu \n", sizeof(bd1) ); // 20

    return 0;
}
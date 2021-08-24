#include <stdio.h>

struct owner {
    char name[12];
};
struct leasecompany {
    char title[12];
    char headquarters[12];
};
struct car_data {
    char *brand;
    char model[12];
    int status; // 0 - owned, 1 - leased
    union { // anonymous union
        struct owner;
        struct leasecompany;
    };
};

union {
    int code;
    float cost;
} item, *ptr;

int main( ) {
    item.code = 1265; // setting
    ptr = &item; // pointing
    ptr->code = 3421; // setting via pointer
    printf(" ways of getting value: %d \t %d \t %d \n", item.code, ptr->code, (*ptr).code );

    return 0;
}
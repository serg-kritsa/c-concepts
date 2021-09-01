#include <stdio.h>

struct packed_struct {
    unsigned int :3; // w/o name :3 means padding by 3
    unsigned int f1:1;
    unsigned int f2:1;
    unsigned int f3:1;
    unsigned int type:8;
    unsigned int index:18;
};

int main() {
    struct packed_struct packed_data_1;
    // packed_data_1.type = 7;
    unsigned int bit = packed_data_1.type;
    if (packed_data_1.f2) {}
    
    struct packed_struct packed_data_2 = {1,1}; // set 1 to f1

    return 0;
}
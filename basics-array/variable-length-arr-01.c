#include <stdio.h>

void fill_array_by_letter(int size) {
    char alpha[size];
    int x = 0;

    while (x < size) {
        alpha[x] = 'A' + x;
        printf("elem is: %s ", alpha[x]);
        x++;
    }
    printf("\n");
}

int main( ) {
    fill_array_by_letters(5);
    fill_array_by_letters(20);
    // printf("=%d ", );
    // printf("\t");

    return 0;
}
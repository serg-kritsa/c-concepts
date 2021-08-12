#include <stdio.h>

double multiplyByTwo(double input) {
    double twice = input * 2.0;
    return twice;
}

int main(int argc, char *argv[]) {
    int age = 30;
    double salary = 12345.67;
    double myList[] = {1.2, 3.4, 5.67};

    printf(" %.3f from stack \n", multiplyByTwo(salary));
    
    return 0;
}
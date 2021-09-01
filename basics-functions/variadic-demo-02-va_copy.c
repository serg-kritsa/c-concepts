#include <stdio.h>
#include <stdarg.h>
#include <math.h>

double sample_stddev(int count, ...);

int main( ) {
    printf("g =%.2lf \n", average(4, 3.5, 4.5, 5.5, 6.5));

    return 0;
}

double sample_stddev(int count, ...){
    double sum = 0;
    va_list args1; // pointer variable list
    va_start(args1, count); // set last mandatory arg

    va_list args2; // pointer variable list
    va_copy(args2, args1); // pointer variable list

    for (int i = 0; i < count; i++) {
        double num = va_arg(args1, double);
        sum += num;
    }
    va_end(args1);

    double mean = sum/count;
    double sum_sq_diff = 0;
    for (int i = 0; i < count; i++) {
        double num = va_arg(args2, double);
        sum_sq_diff += (num-mean) * (num-mean);
    }
    va_end(args2);

    return sqrt(sum_sq_diff/count);
}
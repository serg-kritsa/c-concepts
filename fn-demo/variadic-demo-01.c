#include <stdio.h>
#include <stdarg.h>

double average(double v1, double v2, ...);

int main( ) {
    double v1 = 10.5, v2 = 2.5;
    int num1 = 6, num2 = 5;
    long num3 = 12L, num4 = 20L;

    printf("Avg =%.2lf \n", average(v1, 3.5, v2, 4.5, 0.0));
    printf("Avg =%.2lf \n", average(1.0, 2.0, 3.0));
    printf("Avg =%.2lf \n", average( (double)num1, (double)num2, (double)num3, (double)num4), 0.0);

    return 0;
}

double average(double v1, double v2, ...){
    va_list parg; // pointer variable list
    double sum = v1 + v2;
    double value = 0.0;

    int count = 2; // argument counter
    va_start(parg, v2); // set last mandatory arg

    while ((value = va_arg(parg, double)) != 0.0) {
        sum += value;
        ++count;
    }
    va_end(parg);

    return sum/count;
}
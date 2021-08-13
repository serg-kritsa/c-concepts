#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int *age = malloc(sizeof(int));
    *age = 30;
    double *salary = malloc(sizeof(double));
    *salary = 12345.67;
    double *myList = malloc(3 * sizeof(double));
    myList[0] = 1.2;
    myList[1] = 2.3;
    myList[2] = 3.4;

    double *twiceSalary = multiplyByTwo(salary);

    printf(" %.3f from heap \n", *twiceSalary);

    free(age);
    free(salary);
    free(myList);
    free(twiceSalary);
    
    return 0;
}
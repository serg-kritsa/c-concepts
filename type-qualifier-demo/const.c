#include <stdio.h>

void display(const int array[]){
// void display(const int* array[]){ // the same
    // array[0] = 1; //ERROR: data at which an array points can not be changed
}

int main( ) {
    const double pi = 3.14;
    // pi = pi/2; // ERROR

    const int days[2] = {10,11};
    // days[1] = 101; // ERROR

    typedef const int zip;
    const zip q = 8; // const const int q = 8 // const written many times is fine


    float f1 = 1.2;
    const float *pf = &f1; // constant float type of pointer // pf points to a constant float value
    // // int *pcasted1 = (int*) pf; // ERROR: float* is read-only
    float f2 = 2.1;
    pf = &f2;
    // printf("pf=%f ", *pf); // pf=2.100000 

    float * const pt = &f1; // constant float type of pointer // pf points to a constant float value
    // pt = &f2; // ERROR: & is read-only

    const float * const ptr = &f1;
    // *ptr = 11.2;    // ERROR: value is read-only 
    // ptr = &f2;      // ERROR: & is read-only
    int *pcasted2 = (int*) ptr; int i1 = 1; pcasted2 = i1; // works fine
    
    return 0;
}
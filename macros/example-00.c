#include <stdio.h>

// Define macro to find sum of two numbers
#define SUM(x, y) (x + y)

// Define macro to find square and cube
#define SQUARE(x) (x * x)
#define CUBE(x) (x * x * x)

void macrosExample01(){
    int num1, num2;

    // Input two numbers from user
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);

    // Calculate and print sum using macro
    printf("Sum(%d, %d) = %d\n", num1, num2, SUM(num1, num2));
}
void macrosExample02(){
    int num;

    // Input a number from user
    printf("Enter any number to find square and cube: ");
    scanf("%d", &num);

    // Calculate and print square
    printf("SQUARE(%d) = %d\n", num, SQUARE(num));

    // Calculate and print cube
    printf("CUBE(%d) = %d\n", num, CUBE(num));
}

int main()
{
    macrosExample01();
    macrosExample02();

    return 0;
}

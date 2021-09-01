#include <stdio.h>

long long convertDecimalToBinary(int n);

int main()  {
    int num1 = 0, num2 = 0;
    long long b_num1 = 0, b_num2 = 0;

    int d_num1LeftShiftResult = 0;

    long long b_num1ComplementResult = 0;
    long long b_num2ComplementResult = 0;
    long long b_num1ANDnum2Result = 0;
    long long b_num1ORnum2Result = 0;
    long long b_num1ExORnum2Result = 0;
    long long b_num1LeftShiftResult = 0;

    /* Input number 1 from user */
    printf("Enter an integer: ");
    scanf("%d", &num1);

    /* Input number 2 from user */
    printf("Enter another integer: ");
    scanf("%d", &num2);

    b_num1 = convertDecimalToBinary(num1);
    b_num2 = convertDecimalToBinary(num2);

    d_num1LeftShiftResult = num1 << 2;

    b_num1ComplementResult = convertDecimalToBinary(~num1);
    b_num2ComplementResult = convertDecimalToBinary(~num2);
    b_num1ANDnum2Result = convertDecimalToBinary(num1 & num2);
    b_num1ORnum2Result = convertDecimalToBinary(num1 | num2);
    b_num1ExORnum2Result = convertDecimalToBinary(num1 ^ num2);
    b_num1LeftShiftResult = convertDecimalToBinary(num1 << 2);

    //          long long
    printf("%d (%lld) & number %d (%lld) is: %lld \n", num1, b_num1, num2, b_num2, b_num1ANDnum2Result);
    printf("%d (%lld) | number %d (%lld) is: %lld \n", num1, b_num1, num2, b_num2, b_num1ORnum2Result);
    printf("%d (%lld) ^ %d (%lld) is: %lld \n", num1, b_num1, num2, b_num2, b_num1ExORnum2Result);
    printf("~ %d (%lld) is: %lld \n", num1, b_num1, b_num1ComplementResult);
    printf("~ operator on number %d (%lld) is: %lld \n", num2, b_num2, b_num2ComplementResult);
    printf("%d (%lld) << (left shift) is %d (%lld)\n", num1, b_num1, d_num1LeftShiftResult, b_num1LeftShiftResult);

    return 0;
}

long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1;
    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}



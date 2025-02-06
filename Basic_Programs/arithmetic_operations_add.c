#include <stdio.h>
int main()
{
    /*Inputting values from the user*/
    float a,b,sum;
    printf("Enter a :");
    scanf("%f",&a);
    printf("Enter b :");
    scanf("%f",&b);

    int sum = a + b;
    printf("Sum is ",sum);

    int diff = a - b;
    printf("Difference is ",diff);

    int prod = a * b;
    printf("Product is ",prod);

    float rem = a % b;
    printf("Remainder is ",rem);

    float quo = a/b;
    printf("Quotient is ",quo);

    return 0;
}
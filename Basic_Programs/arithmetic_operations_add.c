#include <stdio.h>
int main()
{
    /*Inputting values from the user*/
    int a,b;
    printf("Enter a :\n");
    scanf("%d",&a);
    printf("Enter b :\n");
    scanf("%d",&b);

    int sum = a + b;
    printf("Sum is %d\n",sum);

    int diff = a - b;
    printf("Difference is %d\n",diff);

    int prod = a * b;
    printf("Product is %d\n",prod);

    float rem = a % b;
    printf("Remainder is %f\n",rem);

    float quo = a/b;
    printf("Quotient is %f\n",quo);

    return 0;
}
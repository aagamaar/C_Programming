#include <stdio.h>
int main()
{
    float p,r,t;

    //principle amount, rate of interest, no. of years

    printf("Enter the value of p ,r , t : ");
    scanf("%f %f %f",&p,&r,&t);
    
    float simp_int=(p*r*t)/100;
    printf("The simple interest calculated :  %f\n",  simp_int);
    return 0;       
}
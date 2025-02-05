#include <stdio.h>
int main()
{
    float p,r,t;

    //principle amount, rate of interest, no. of years

    
    printf("Enter the value of p ,r , t : ");
    scanf("%f %f %f",&p,&r,&t);
    
    float simple_int=(p*r*t)/100;
    printf("The simple interest calculated here :  %f\n",  simple_int );
    return 0;       
}
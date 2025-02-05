#include <stdio.h>
int main()
{
    //Declaration of variables p,r,t
    float p,r,t;

    //principle amount, rate of interest, no. of years

    //Inputting the values of p,r,t from the user
    printf("Enter the value of p ,r , t : ");
    scanf("%f %f %f",&p,&r,&t);
    
    //Declaring the float variable 
    float simple_int=(p*r*t)/100;
    printf("The simple interest calculated here :  %f\n",  simple_int );
    return 0;       
}
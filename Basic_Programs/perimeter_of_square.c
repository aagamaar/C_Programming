
/*SOURCE CODE*/
#include <stdio.h>
int main()
{
    float a, peri;
    printf("Enter the measurement of the side: ");
    scanf("%f",&a);
    peri=4*a;
    printf("Perimeter of a square with side %f: %f",a,peri);
    return 0;
}

/*OUTPUT:*/

/* Enter the measurement of the side: 9
Perimeter of a square with side 9.000000: 36.000000 */
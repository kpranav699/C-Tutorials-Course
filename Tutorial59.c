#include <stdio.h>
#include "Tutorial54.c"
#define PI 3.14
#define SQUARE(r) r*r


int main()
{
    float var = PI;
    int r = 4;
    int * ptr = functionDandling();
    printf("The value of PI is %f\n", var);
    printf("The area of this circle is %f\n", PI * SQUARE(r));
    return 0;
}
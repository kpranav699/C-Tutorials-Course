#include <stdio.h>
#define PI 3.14
/* this is a multiline comment

this is ignored by compoler
*/

int main()
{
    int a = 8;
    const float b = 7.333;
    //PI = 7.33;
    printf(" tab character \t\t my backslash  %f", PI); //cannot do this since b is a constant
    //b = 7.22; //cannot do this since b is a constant

    // printf("Hello World\n");
    // printf("The value of a is %d and the value of b is %2.4f\n", a, b);
    // printf(" %18.4f  this", b);

    return 0;
}

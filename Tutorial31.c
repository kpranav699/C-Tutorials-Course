#include <stdio.h>


void changeValue(int* adress)
{
    *adress = 37565;
}

int main()
{
    int a = 34, b = 56;
    printf("The value of a now is %d\n", a);
    changeValue(&a);
    printf("The value of a now is %d\n", a);
    return 0;
}

// Quick Quiz:
/*Given two numbers a add b add them and then subtract them and assign them to a and b using call by reference.

a = 4
b = 3

after running the function a and b should be:
a = 7
b = 1
*/







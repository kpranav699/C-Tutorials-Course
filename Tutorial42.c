#include <stdio.h>

int b = 34; // This is a global variabble since it is decleared inside main()

int ret()
{
      return 43*3;
}


int func1(int b1)
{
    static int myvar = ret();
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    // printf("The value of b inside func1 is %d\n", b);
    // printf("The adress of b inside func1 is %d\n", &b);
    return b1 + myvar;
}

int main()
{
    int b = 344;
    // printf("The adress of b inside main is %d\n", &b);
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    // printf("The value of func1 is %d", val);
    // printf("%d", loc);
    return 0;
}
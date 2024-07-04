#include <stdio.h>
#include <stdlib.h>

int sum = 34;
int* functionDandling()
{
    int a, b, sum2;
    a = 34;
    b = 364;
    sum = a + b;
    return &sum;
}

int main2()
{
    // Case 1: De allocation of a memory block
    int *ptr =(int *)malloc(7* sizeof(int));
    ptr[0] = 34;
    ptr[1] = 36;
    ptr[2] = 64;
    ptr[3] = 5;
    free(ptr);  // ptr is now a dandling pointer

    // Case 2: Function returning local variable adress
    int * dangPtr = functionDandling(); // ptr is now a dandling pointer


    int * dandlingPtr3;
    // Case 3: If a variable goes out of scope
    {
        int a = 12;
        dandlingPtr3 = &a;
    }

    // Here variable a goes out of scope which means dandlingPtr3 is 
    // pointing to a location which is freed and hence dandlingPtr3 is now a dandling pointer



    return 0;
}
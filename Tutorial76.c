#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Edistance(int x1, int y1, int x2, int y2)
{
    int a = (y2-y1)*(y2-y1)+(x2-x1)*(x2-x1);
    return sqrt(a);
}

float areaOfCircle(int x1, int y1, int x2, int y2, float(*distance)(int x1, int y1, int x2, int y2))
{
     return distance(x1, y1, x2, y2);
}

int main()
{
    int x1, y1, x2, y2;
    float dst;
    // take x1, y1 and x2, y2 from the user using scanf 
    printf("The value of x1\n");
    scanf("%d", &x1);

    printf("The value of y1\n");
    scanf("%d", &y1);

    printf("The value of x2\n");
    scanf("%d", &x2);

    printf("The value of y2\n");
    scanf("%d", &y2);
    dst = areaOfCircle(x1, y1, x2, y2, Edistance);
    printf("The distance between these points is %f\n", dst);
    return 0;
}
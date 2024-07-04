#include <stdio.h>

int main()
{
    printf("HEllo World\n");
    int i, age;
    
    for ( i=0; i<10; i++)
    {
        printf("%d\n Enter your age\n", i);
        scanf("%d", &age);

        //if (age>10)
        //{
        //    break;
        //}

        if (age>10)
        {

            continue;

        }
        
        
        printf("We have not come across any continue statement.\n");
        printf("We have not come across any continue statement.\n");
        printf("We have not come across any continue statement.\n");
        printf("We have not come across any continue statement.\n");
        printf("Pranav is a good boy!\n");
        
        
    }
    
    

    return 0;
}


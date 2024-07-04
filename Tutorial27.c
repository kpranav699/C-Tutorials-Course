#include <stdio.h>
int main()
{
  // char a = '3';
  // char* ptra = &a;
  // printf("%d\n", ptra);
  // ptra--;
  // printf("%d\n", ptra);
  // printf("%d", ptra-2);

  int arr[] = {311, 52, 3, 4, 5, 6, 67};
  int *arrayptr = arr;
  printf("Value at position 3 of the array is %d\n", arr[3]);
  printf("The adress of first element of the array is %d \n", &arr[0]);
  printf("The adress of first element of the array is %d \n", arr);
  printf("The adress of second element of the array is %d \n", &arr[1]);
  printf("The adress of second element of the array is %d \n", arr + 1);
  printf("The adress of third element of the array is %d \n", &arr[2]);
  printf("The adress of third element of the array is %d \n", arr + 2);
  // arr--; //this line will throw an error;

  printf("The value and adress of first element of the array is %d \n", *(&arr[0]));
  printf("The value and adress of first element of the array is %d \n", arr[0]);
  printf("The value and adress of first element of the array is %d \n", *(arr));
  printf("The value and adress of second element of the array is %d \n", *(&arr[1]));
  printf("The value and adress of second element of the array is %d \n", *(arr + 1));
  printf("The value and adress of second element of the array is %d \n", arr[1]);

  return 0;
}
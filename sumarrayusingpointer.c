//sum of array elements using pointers
#include <stdio.h>
#include <malloc.h>
int main()
{
   int i, n, sum = 0;
   int *ptr;
   printf("Enter size of array : ");
   scanf("%d", &n);

   /*ptr = (cast-type*) malloc(byte-size)
    Example:

    ptr = (int*) malloc(100 * sizeof(int));*/
   ptr = (int *) malloc(n * sizeof(int));
   printf("Enter elements in the List ");
   for (i = 0; i < n; i++){
      scanf("%d", ptr + i);
   }
   // sum of elements
   for (i = 0; i < n; i++){
      sum = sum + *(ptr + i);
   }
   printf("Sum of all elements in an array is = %d", sum);
   return 0;
}
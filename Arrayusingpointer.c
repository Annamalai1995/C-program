#include <stdio.h>

int main()
{
  
  int arr[5] = {2, 4, 6, 8, 10}, i;
	
  for(i = 0; i < 5; i++)
  {
	
	printf("[Position %d] Data : %u, Address : %d\n", i, *(arr + i), (arr + i));
  }
	
  return 0;
}
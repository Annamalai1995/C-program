#include <stdio.h>

int main() {
    int i = 1, N;
    
    printf("Enter a value : ");
    scanf("%d", &N);
    
    printf("Table is %d : \n", N);
    do {
        printf("%d * %d = %d\n", N, i, N * i);
        
        i++;
    } while (i <= 10);
    
    return 0;
}
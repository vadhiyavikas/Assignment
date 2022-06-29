#include<stdio.h>
int main() {

    int number , i , square;

    printf("Enter the number:");
    scanf("%d" ,&number);

    for ( i = 1; i <= number; i++)
    {
        square = i * i;
        printf(" %d \n" ,square);
    }
    return 0;
}
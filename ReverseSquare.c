#include<stdio.h>
int main(){

    int number , i ,square;

    printf("Enter the number :");
    scanf("%d" ,&number);

    for ( i = number; i >=1; i--)
    {
        square = i*i;
        printf("%d \n",square);
    }
    return 0 ;


}
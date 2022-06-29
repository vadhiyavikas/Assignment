#include<stdio.h>
int main (){

    int i ,number ,cube ;

    printf("Enter the number :");
    scanf("%d",&number);

    for ( i = number; i >=1; i--)
    {
        cube = i*i*i;
        printf("%d \n",cube);
    }
    return 0 ;

}
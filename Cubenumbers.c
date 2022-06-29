#include<stdio.h>
int main() {

    int number , i , cube ;

    printf("enter the number:");
    scanf("%d",&number);

    for ( i = 1; i <=number; i++)
    {
        cube = i*i*i;
        printf("%d \n",cube);
    }
    return 0 ;

}
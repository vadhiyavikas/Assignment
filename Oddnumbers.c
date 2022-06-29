#include<stdio.h>
int main(){

    int numbers ,i ;

    printf("Enter the number: ");
    scanf("%d" , &numbers);

    for ( i = 1; i <numbers; i++)
    {
        if (i%2  ==! 0)
        {
            printf("%d \n",i);
        }
        
    }
    return 0 ;
}
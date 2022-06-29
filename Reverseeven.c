#include<stdio.h>
int main() {

    int number  ,i;

    printf("Enter the number :");
    scanf("%d",&number);

    for ( i = number; i >=1; i--)
    {
        if (i%2 == 0)
        {
            printf("%d \n",i);
        }
        
    }
    return 0;

}
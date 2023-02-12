#include<stdio.h>
int main()
{
    int number = 0, sum = 0 ;
    printf("enter the number :");
    scanf("%d",&number);
    
    while(number>0)
    {
        sum+= number%10;
        number/=10;
    }
    printf("Sum of the Digit is %d\n",sum);
    return 0;
}

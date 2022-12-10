#include<stdio.h>

int main()
{
    int number;
    printf("Please input a number: ");
    scanf("%d", &number);

    if(number % 2 == 1)
    {
        printf("%d is an odd integer.", number);
    }
    else
    {
        printf("%d is not an odd integer.", number);
    }
    return 0;
}
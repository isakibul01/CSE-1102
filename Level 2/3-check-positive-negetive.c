#include<stdio.h>

int main()
{
    int number;
    printf("Please input a number: ");
    scanf("%d", &number);

    if(number >0)
    {
        printf("%d is a positive number.", number);
    }
    else
    {
        printf("%d is a negative number.", number);
    }
    return 0;
}
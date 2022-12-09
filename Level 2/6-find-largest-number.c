#include<stdio.h>

int main()
{
    int number1, number2, number3;
    printf("Please input three number: ");
    scanf("%d %d %d", &number1, &number2, &number3);

    if(number1 > number2)
    {
        printf("The 1st number is greatest among three.");
    }
    else if(number2 > number3)
    {
        printf("The 2nd number is greatest among three.");
    }
    else
    {
        printf("The 3st number is greatest among three.");
    }
    return 0;
}
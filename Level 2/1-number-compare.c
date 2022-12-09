#include<stdio.h>

int main()
{
    int number1, number2;
    printf("Please input two integer: ");
    scanf("%d %d", &number1, &number2);

    if(number1 == number2)
    {
        printf("Number1 and Number2 are equal.");
    }
    else
    {
        printf("Number1 and Number2 are not equal.");
    }
    return 0;
}
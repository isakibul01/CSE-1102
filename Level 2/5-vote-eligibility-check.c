#include<stdio.h>

int main()
{
    int age;
    printf("Please input your age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("You are eligible to cast your vote.");
    }
    else
    {
        printf("Sorry, You are not eligible to cast your vote.");
    }
    return 0;
}
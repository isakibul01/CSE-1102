#include<stdio.h>

int main()
{
    int co1, co2;
    printf("Please input the value of X and Y coordinate: ");
    scanf("%d %d", &co1, &co2);

    if(co1 > 0 && co2 > 0)
    {
        printf("The coordinate point (%d, %d) lies in the First quadrant.", co1, co2);
    }
    else if(co1 < 0 && co2 > 0)
    {
        printf("The coordinate point (%d, %d) lies in the Second quadrant.", co1, co2);
    }
    else if(co1 < 0 && co2 < 0)
    {
        printf("The coordinate point (%d, %d) lies in the Third quadrant.", co1, co2);
    }
    else if(co1 > 0 && co2 < 0)
    {
        printf("The coordinate point (%d, %d) lies in the Fourth quadrant.", co1, co2);
    }
    else if(co1 == 0 && co2 == 0)
    {
        printf("The coordinate point (%d, %d) lies in the Origin.", co1, co2);
    }
    return 0;
}
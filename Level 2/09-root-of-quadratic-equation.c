#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c, d;
    float x1, x2;

    printf("Please input the value of a, b & c: ");
    scanf("%d %d %d", &a, &b, &c);
    d = b*b-4*a*c;

    if(d == 0)
    {
        printf("Both roots are equal.");
        x1 = -b*(2.0*a);
        x2 = x1;
        printf("First root = %f", x1);
        printf("Second root = %f", x2);
    }
    else if(d > 0)
    {
        printf("Both root are equal.");
        x1 = (-b+sqrt(d))/(2*a);
        x1 = (-b-sqrt(d))/(2*a);
        printf("First root = %f", x1);
        printf("Second root = %f", x2);
    }
    else
    {
        printf("Roots are imaginary.");
    }
    return 0;
}
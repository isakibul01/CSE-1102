#include<stdio.h>

int main()
{
    int rows, i, j;
    printf("Enter the number of row: ");
    scanf("%d", &rows);

    for(i=0; i<rows; i++)
    {
        for(j=i+1; j<rows; j++)
        {
            printf(" ");
        }
        for(j=0; j<(2*i)-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
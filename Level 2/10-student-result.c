#include<stdio.h>
#include<string.h>

int main()
{
    int roll, phy, chem, cmApp, total;
    float  percentage;
    char name[20], div[20];
    printf("Please input the roll of the student: ");
    scanf("%d", &roll);
    printf("Please input the name of the student: ");
    scanf("%s", name);
    printf("Please input the obtained mark in Physics, Chemistry & Computer Application: ");
    scanf("%d %d %d", &phy, &chem, &cmApp);

    total = phy + chem + cmApp;
    percentage = total / 3.0;

    if(percentage >= 60)
    {
        strcpy(div, "First Division.");
    }
    else if(percentage < 60 && percentage >= 48)
    {
        strcpy(div, "Second Division.");
    }
    else if(percentage <48 && percentage >=36)
    {
        strcpy(div, "Pass.");
    }
    else
    {
        printf("Fail.");
    }

    printf("Roll no: %d\n", roll);
    printf("Student name: %s\n", name);
    printf("Mark in Physics: %d\n", phy);
    printf("Mark in Chemistry: %d\n", chem);
    printf("Mark in Computer Application: %d\n", cmApp);

    printf("Total mark: %d\n", total);
    printf("Percentage: %f\n", percentage);
    printf("Division: %s\n", div);

    return 0;
}
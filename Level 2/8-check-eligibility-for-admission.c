#include<stdio.h>

int main()
{
    int math, phy, chem, total, mathAndPhy;

    printf("Input the mark obtained in Mathematics: ");
    scanf("%d", &math);

    printf("Input the mark obtained in Physics: ");
    scanf("%d", &phy);

    printf("Input the mark obtained in Chemistry: ");
    scanf("%d", &chem);

    total = math + phy + chem;
    mathAndPhy = math + phy;

    if(math >= 65){
        if(phy >= 55){
            if(chem >= 50){
                if(total >= 180 || mathAndPhy >= 140){
                    printf("The candidate is eligible.");
                }else{
                    printf("The candidate is not eligible.");
                }
            }else{
                printf("The candidate is not eligible.");
            }
        } else{
            printf("The candidate is not eligible.");
        }
    }
    else{
        printf("The candidate is not eligible.");
    }
    return 0;
}
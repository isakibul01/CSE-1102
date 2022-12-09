#include<stdio.h>
#include<string.h>

int main()
{
    char yourName[20], partnerName[20];
    int length1, length2, concatLength;

    printf("Please input your name: ");
    scanf("%s", yourName);
    printf("Please input your partner name: ");
    scanf("%s", partnerName);

    length1 = strlen(yourName);
    length2 = strlen(partnerName);

    concatLength = length1 + length2;
    

    if(concatLength < 8){
        printf("%s and %s's love percentage is 80", yourName, partnerName);
    }
    else if(concatLength < 10){
        printf("%s and %s's love percentage is 68", yourName, partnerName);
    }
    else if(concatLength < 12){
        printf("%s and %s's love percentage is 74", yourName, partnerName);
    }
    else if(concatLength < 15){
        printf("%s and %s's love percentage is 83", yourName, partnerName);
    }
    else if(concatLength > 15){
        printf("%s and %s's love percentage is 90", yourName, partnerName);
    }
    else{
        printf("%s and %s's love percentage is 94", yourName, partnerName);
    }



    return 0;
}
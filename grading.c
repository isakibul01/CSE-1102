#include<stdio.h>

int main()
{
int number;
printf("Please input a number: ");
scanf("%d", &number);

if(number<0 || number>100){
    printf("Wrong number!");
}
else if(number>=80){
    printf("You got A+");
}
else if(number>=70){
    printf("You got A");
}
else if(number>=60){
    printf("You got A-");
}
else if(number>=50){
    printf("You got B");
}
else if(number>=40){
    printf("You got C");
}
else if(number>=33){
    printf("You got D");
}
else{
    printf("Failed!");
}
return 0;
}

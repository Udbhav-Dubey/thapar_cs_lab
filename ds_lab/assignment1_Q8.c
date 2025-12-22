//Write a program to swap two numbers using functions.
#include <stdio.h>
int main (){
    float n1;
    float n2;
    printf("enter the first number : ");
    scanf("%f",&n1);
    printf("enter the second number : ");
    scanf("%f",&n2);
    float temp;
    temp=n1;
    n1=n2;
    n2=temp;
    printf("now the first number is %.2f  \n",n1);
    printf("now the second number is %.2f  \n",n2);
return 0;
}

//Write a program to display first n elements of Fibonacci series.
#include <stdio.h>
int main (){
    printf("enter the nth element to find fibonacci : ");
    int n;
    scanf("%d",&n);
    int a=0;
    int b=1;
    int c;
    for (int i=0;i<n;i++){
        printf("%d  ",a);
        c=a+b;
        a=b;
        b=c;
    }
return 0;
}

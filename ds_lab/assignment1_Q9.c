//Write a function that returns the first integer between n_min and n_max entered as data tothe calling function (main).
#include <stdio.h>
int firstint(int n_min,int n_max){
    return n_min;
}
int main (){
    printf("enter the range\n");
    printf("starting point : ");
    int n_min;
    scanf("%d",&n_min);
    printf("ending point : ");
    int n_max;
    scanf("%d",&n_max);
    if (n_min>n_max){printf("wrong range ");return 0;}
    else {printf("the answer is %d",firstint(n_min,n_max));}
return 0;
}

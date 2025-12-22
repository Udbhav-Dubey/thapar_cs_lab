//Write a program to compute factorial of a number using iterative approach.
#include <stdio.h>
int main (){
    long long int n;
    printf("please enter the number : ");
    scanf("%lld",&n);
    long long result=1;
    for (long long int i=1;i<=n;i++){
        result*=i;
    }
    printf("the answer is %lld",result);
return 0;
}

#include <stdio.h>
bool isPalindrome(int x) {
    if (x<0){return false ;}
    int reverse =0;
    long long int number = x;
    for (int i=0;x!=0;i++){
     reverse = (reverse *10)+(x%10);
        x=x/10;
    }
    if (number==reverse){
        return true;
    }
    else return false;
}
int main (){
    printf("enter the number\n");
    int numb;
    scanf("%d",&numb);
    isPalindrome(numb);
return 0;
}

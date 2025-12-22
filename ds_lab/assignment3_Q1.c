// Write a program to implement strlen() function.
#include <stdio.h>
int main (){
    int l=0;
    int n=100;
    char str[1000];
    fgets(str,1000,stdin);
    for (int i=0;str[i]!='\0';i++){
        l++;
    }
    printf("the length is %d",--l);
return 0;
}

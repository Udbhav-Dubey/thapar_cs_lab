//Write a program to implement strcat() function.
#include <stdio.h>
int main (){
    char str1[1000];
    printf("enter string 1\n");
    fgets(str1,1000,stdin);
    for (int i=0;str1[i]!='\0';i++){
        if (str1[i]=='\n'){
            str1[i]='\0';
                break;
    }}
    printf("enter the string 2\n");
    char str2[1000];
    fgets(str2,1000,stdin);
     for (int i=0;str2[i]!='\0';i++){
        if (str2[i]=='\n'){
            str2[i]='\0';
                break;
    }} 
    char nstr[2000];
    int j=0;
    for (int i=0;str1[i]!='\0';i++){
        nstr[j++]=str1[i];
    }
    for (int i=0;str2[i]!='\0';i++){
        nstr[j++]=str2[i];
    }
    nstr[j] = '\0';
    printf("\n%s\n",nstr);
return 0;
}

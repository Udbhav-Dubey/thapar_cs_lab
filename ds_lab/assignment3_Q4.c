//Write a program to implement strcmp() function.
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
    int i=0,result=0;
    while(str1[i]!='\0'&&str2[i]!='\0'){
        if (str1[i]!=str2[i]){
            result=str1[i]-str2[i];
            break;
        }
        i++;
    }
    if (result==0){
        result=str1[i]-str2[i];
    }
    if (result==0){printf("strings are equal\n");}
    else if (result<0){printf("string1 is smaller\n");}
    else printf("string 1 is greater\n");
return 0;
}

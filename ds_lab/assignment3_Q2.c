// Write a program to implement strcpy() function.
#include <stdio.h>
int main (){
    char str1[1000];
    char str2[1000];
    fgets(str1,1000,stdin);
	for (int j=0;str1[j]!='\0';j++){
		if (str1[j]=='\n'){
		str1[j]='\0';
		break;
		}}
    int j=0;
    for (j=0;str1[j]!='\0';j++){
        str2[j]=str1[j];
        }
    str2[j]='\0';
    printf("copied one : %s\n",str2);
return 0;
}

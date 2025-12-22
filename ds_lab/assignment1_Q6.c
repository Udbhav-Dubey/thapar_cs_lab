//Write a program to print a table book from Table X to Table Y. X and Y are user inputs.
#include <stdio.h>
int main (){
    printf("enter the starting table : ");
    int x;
    scanf("%d",&x);
    printf("enter the ending table : ");
    int y;
    scanf("%d",&y);
    printf("table book from %d to %d ---\n\n",x,y);
    for (int i=x;i<=y;i++){
        printf("table of %d : \n",i);
        for (int j=1;j<=10;j++){
            printf("%d*%d=%d\n",i,j,i*j);
        }
        printf("\n");
    }
return 0;
}

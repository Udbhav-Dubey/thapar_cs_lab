#include <stdio.h>
#include <stdlib.h>
#define pie 3.14f
int main (){
    while(true){
    printf("\nplease select the figure by typing the number against it : \n");
    printf("1.sqaure\n2.rectange\n3.circle\n4.exit\n");
    int n;
    printf("now enter the number : ");
    scanf("%d",&n);
    if (n==1){
        printf("you have selected a square now enter the length of side for it : ");
        float s;
        scanf("%f",&s);
        printf("the area is %f \n",s*s);
    }
    else if (n==2){
        printf("you have selected a rectangle now enter the dimensions\n");
        printf("enter the length : ");
        float l;
        scanf("%f",&l);
        float b;
        printf("enter the breadth : ");
        scanf("%f",&b);
        printf("the area is %f\n",l*b);
    }
    else if (n==3){
        printf("you have selected a circle now enter its radius : ");
        float r;
        scanf("%f",&r);
        printf("the area is %f\n",pie*r*r);
    }
    else if (n==4){
        printf("thanks for using the program\n");
        break;
        }
    else {printf("invalid number \n");
        break;}}
return 0;
}

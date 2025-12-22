#include <stdio.h>
int main (){
    int size;
    printf("enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    printf("please enter the the number to be checked ");
    scanf("%d",&target);
    int flag=0;
    int i=0;
    for (i=0;i<size;i++){
        if (arr[i]==target){
            flag=1;
            break;
        }
    }
    if (flag==1){printf("the number is at index : %d\n",i);}
    else printf("not found\n");
return 0;
}

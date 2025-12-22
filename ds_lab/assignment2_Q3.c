#include <stdio.h>
int main (){
    int size;
    printf("enter the size of array : ");
    scanf("%d",&size);
    int arr[100]; 
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("array is : ");
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int pos, num;
    printf("enter position (0 to %d) and number for insertion: ", size);
    scanf("%d %d", &pos, &num);
    for (int i=size;i>pos;i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = num;
    size++;
    printf("after insertion: ");
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("enter position (0 to %d) for deletion: ", size-1);
    scanf("%d",&pos);
    for (int i=pos;i<size-1;i++){
        arr[i] = arr[i+1];
    }
    size--;
    printf("after deletion: ");
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}


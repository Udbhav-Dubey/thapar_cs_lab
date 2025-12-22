#include <stdio.h>

void linear_search(int *arr, int size, int target) {
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
}

void second_max_min(int *arr, int size){
    int max, secondMax, min, secondMin;
    max = secondMax = arr[0];
    min = secondMin = arr[0];
    for (int i=1;i<size;i++){
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    int foundMax = 0, foundMin = 0;
    for (int i=0;i<size;i++){
        if (arr[i] > secondMax && arr[i] != max){
            secondMax = arr[i];
            foundMax = 1;
        }
        if (arr[i] < secondMin && arr[i] != min){
            secondMin = arr[i];
            foundMin = 1;
        }
    }
    if (foundMax) printf("second maximum = %d\n", secondMax);
    else printf("no second maximum found\n");
    if (foundMin) printf("second minimum = %d\n", secondMin);
    else printf("no second minimum found\n");
}

void array_ops(int *arr, int *size) {
    printf("array is : ");
    for (int i=0;i<*size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int pos, num;
    printf("enter position (0 to %d) and number for insertion: ", *size);
    scanf("%d %d", &pos, &num);
    for (int i=*size;i>pos;i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = num;
    (*size)++;
    printf("after insertion: ");
    for (int i=0;i<*size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("enter position (0 to %d) for deletion: ", *size-1);
    scanf("%d",&pos);
    for (int i=pos;i<*size-1;i++){
        arr[i] = arr[i+1];
    }
    (*size)--;
    printf("after deletion: ");
    for (int i=0;i<*size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("enter the size of array : ");
    scanf("%d",&size);
    int arr[100];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    printf("please enter the the number to be checked ");
    scanf("%d",&target);
    linear_search(arr, size, target);
    second_max_min(arr, size);
    array_ops(arr, &size);
    return 0;
}


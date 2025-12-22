#include <stdio.h>
int main (){
    int n1, n2;
    printf("enter size of first array : ");
    scanf("%d",&n1);
    printf("enter size of second array : ");
    scanf("%d",&n2);
    int arr1[n1], arr2[n2], merged[n1+n2];
    printf("enter sorted elements of array 1:\n");
    for (int i=0;i<n1;i++) scanf("%d",&arr1[i]);
    printf("enter sorted elements of array 2:\n");
    for (int i=0;i<n2;i++) scanf("%d",&arr2[i]);
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]) merged[k++] = arr1[i++];
        else merged[k++] = arr2[j++];
    }
    while(i<n1) merged[k++] = arr1[i++];
    while(j<n2) merged[k++] = arr2[j++];
    printf("merged sorted array: ");
    for (int i=0;i<n1+n2;i++) printf("%d ",merged[i]);
    printf("\n");
    return 0;
}


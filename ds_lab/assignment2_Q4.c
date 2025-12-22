#include <stdio.h>
int main (){
    int n;
    printf("enter size of arrays : ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("enter elements of array 1:\n");
    for (int i=0;i<n;i++) scanf("%d",&arr1[i]);
    printf("enter elements of array 2:\n");
    for (int i=0;i<n;i++) scanf("%d",&arr2[i]);
    int choice;
    printf("1: Addition\n2: Subtraction\n3: Multiplication\nenter your choice: ");
    scanf("%d", &choice);
    printf("result: ");
    for (int i=0; i<n; i++) {
        if (choice==1) printf("%d ", arr1[i]+arr2[i]);
        else if (choice==2) printf("%d ", arr1[i]-arr2[i]);
        else if (choice==3) printf("%d ", arr1[i]*arr2[i]);
        else printf("invalid choice");
    }
    printf("\n");
    return 0;
}


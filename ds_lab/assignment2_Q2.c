#include <stdio.h>
#include <limits.h> 

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size < 2) {
        printf("Array must have at least two elements.\n");
        return 1; 
    }

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int max = INT_MIN;
    int secondMax = INT_MIN;
    int min = INT_MAX;
    int secondMin = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            secondMax = max; // The old max is now the second max
            max = arr[i];    // We have a new max
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }

        if (arr[i] < min) {
            secondMin = min; // The old min is now the second min
            min = arr[i];    // We have a new min
        } else if (arr[i] < secondMin && arr[i] != min) {
            secondMin = arr[i];
        }
    }

    if (secondMax == INT_MIN) {
        printf("No second maximum found (all elements might be the same).\n");
    } else {
        printf("Second maximum = %d\n", secondMax);
    }
    
    if (secondMin == INT_MAX) {
        printf("No second minimum found (all elements might be the same).\n");
    } else {
        printf("Second minimum = %d\n", secondMin);
    }

    return 0;
}

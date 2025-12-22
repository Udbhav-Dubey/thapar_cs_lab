//Write a program to demonstrate an array of Pointers to Strings.
#include <stdio.h>
int main() {
    const char *fruits[] = {
        "Apple",
        "Banana",
        "Mango",
        "Watermelon",
        "Strawberry"
    };

    int n = sizeof(fruits) / sizeof(fruits[0]);

    printf("Array of pointers to strings:\n\n");
    for (int i = 0; i < n; i++) {
        printf("fruits[%d] -> %s\n", i, fruits[i]);
    }

    return 0;
}


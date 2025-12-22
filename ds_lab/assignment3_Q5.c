//Write a program to demonstrate limitations of Two-Dimensional Array of Characters.
#include <stdio.h>

int main() {
    // 2D array: 3 strings, each can hold max 10 chars (including '\0')
    char names[3][10] = {"Udbhav", "Dubey", "VeryLongNameThatGetsCut"};

    printf("Stored strings:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}


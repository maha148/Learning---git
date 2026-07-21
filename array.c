#include <stdio.h>

int main() {
    // 1. Array declaration and initialization
    int arr[5] = {10, 20, 30, 40, 50};

    printf("Array elements are:\n");

    // 2. Array lo unna elements print cheyadam - for loop tho
    for(int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
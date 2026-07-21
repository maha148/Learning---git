#include <stdio.h>
int main() {
    int arr[3] = {100, 200, 300};
    int *p = arr; // arr = &arr[0]

    printf("%d\n", *p); // 100
    printf("%d\n", *(p+1)); // 200
    printf("%d\n", *(p+2)); // 300
    return 0;
}
#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    
    if(marks >= 35) {
        printf("Pass\n");
        if(marks >= 75) {
            printf("First Division\n");
        } else if(marks >= 60) {
            printf("Second Division\n");
        } else {
            printf("Third Division\n");
        }
    } else {
        printf("Fail\n");
    }
    return 0;
}
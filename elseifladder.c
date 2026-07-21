#include <stdio.h>

int main() {
    int marks;
    
    printf("Enter marks: ");
    scanf("%d", &marks);
    
    if(marks >= 90) {
        printf("Grade: A\n");
    } else if(marks >= 75) {
        printf("Grade: B\n");
    } else if(marks >= 60) {
        printf("Grade: C\n");
    } else if(marks >= 35) {
        printf("Grade: D - Pass\n");
    } else {
        printf("Fail\n");
    }
    
    return 0;
}
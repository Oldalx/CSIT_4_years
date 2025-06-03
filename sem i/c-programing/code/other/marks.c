#include<stdio.h>
void main() {
    int marks[5], total = 0, i;
    float percentage;

    printf("Enter the marks of 5 students (out of 100):\n");
    for(i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];  // Add marks to total
    }

    percentage = (float)total / 5;  // Calculate percentage

    printf("\nTotal Marks: %d", total);
    printf("\nPercentage: %.2f%% \n", percentage );
}

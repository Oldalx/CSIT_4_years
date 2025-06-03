#include<stdio.h>
void main() {
    int feet, inches;
    printf("Enter the length in feet: ");
    scanf("%d", &feet);
    inches = feet * 12;
    printf("The length in inches is %d \n", inches);
}

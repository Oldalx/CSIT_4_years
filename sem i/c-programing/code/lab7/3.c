#include <stdio.h>

struct Student {
    char name[50];
    int roll_number;
    float marks;
};

void displayStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_number);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1 = {"Kisu", 102, 92.3};
    displayStudent(s1);
    return 0;
}

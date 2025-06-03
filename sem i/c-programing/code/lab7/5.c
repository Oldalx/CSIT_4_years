#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Person {
    char name[50];
    struct Date birth_date;
};

int main() {
    struct Person p1 = {"Kisu", {27, 4, 2005}};

    printf("Name: %s\n", p1.name);
    printf("Birth Date: %02d/%02d/%d\n", p1.birth_date.day, p1.birth_date.month, p1.birth_date.year);

    return 0;
}

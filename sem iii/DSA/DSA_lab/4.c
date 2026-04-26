#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int pq[MAX];
int size = 0;

void insert() {
    int val;
    printf("Enter value: ");
    scanf("%d", &val);
    if (size == MAX)
        printf("Overflow\n");
    else {
        pq[size++] = val;
        for (int i = size-1; i > 0; i--) {
            if (pq[i] < pq[i-1]) {
                int t = pq[i];
                pq[i] = pq[i-1];
                pq[i-1] = t;
            }
        }
    }
}

void deleteMin() {
    if (size == 0)
        printf("Underflow\n");
    else
        printf("Deleted min: %d\n", pq[--size]);
}

void display() {
    if (size == 0)
        printf("Empty\n");
    else {
        printf("Min Priority Queue: ");
        for (int i = 0; i < size; i++)
            printf("%d ", pq[i]);
        printf("\n");
    }
}

int main() {
    int ch;
    while (1) {
        printf("\n1.Insert 2.DeleteMin 3.Display 4.Exit\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1: insert(); break;
            case 2: deleteMin(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Invalid\n");
        }
    }
}

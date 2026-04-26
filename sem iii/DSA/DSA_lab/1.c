#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push() {
    int val;
    if (top == MAX - 1)
        printf("\nStack Overflow\n");
    else {
        printf("Enter value: ");
        scanf("%d", &val);
        stack[++top] = val;
    }
}

void pop() {
    if (top == -1)
        printf("\nStack Underflow\n");
    else
        printf("Popped: %d\n", stack[top--]);
}

void peek() {
    if (top == -1)
        printf("\nStack Empty\n");
    else
        printf("Top = %d\n", stack[top]);
}

void display() {
    if (top == -1)
        printf("\nStack Empty\n");
    else {
        printf("Stack:\n");
        for (int i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}

int main() {
    int ch;
    while (1) {
        printf("\n1.Push 2.Pop 3.Peek 4.Display 5.Exit\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: exit(0);
            default: printf("Invalid");
        }
    }
}

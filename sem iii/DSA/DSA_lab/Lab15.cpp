#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(int val) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = top;
    top = newNode;
    printf("[Pushed %d]\n", val);
}

void pop() {
    if (top == NULL) { printf("[Stack Underflow!]\n"); return; }
    struct Node *temp = top;
    top = top->next;
    printf("[Popped %d]\n", temp->data);
    free(temp);
}

void peek() {
    if (top == NULL) { printf("[Stack Empty]\n"); return; }
    printf("[Top: %d]\n", top->data);
}

void display() {
    if (top == NULL) { printf("[Stack Empty]\n"); return; }
    struct Node *temp = top;
    printf("STACK: Top -> ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("<- Bottom\n");
}

void isEmpty() {
    if (top == NULL) printf("[Stack is Empty]\n");
    else             printf("[Stack is Not Empty]\n");
}

void count() {
    struct Node *temp = top;
    int c = 0;
    while (temp != NULL) { c++; temp = temp->next; }
    printf("[Total Elements: %d]\n", c);
}

int main() {
    int choice, val;
    do {
        printf("\n1.Push 2.Pop 3.Peek 4.Display 5.isEmpty 6.Count 0.Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: printf("Value: "); scanf("%d", &val); push(val); break;
            case 2: pop();     break;
            case 3: peek();    break;
            case 4: display(); break;
            case 5: isEmpty(); break;
            case 6: count();   break;
            case 0: printf("Exit!\n"); break;
            default: printf("[Invalid!]\n");
        }
    } while (choice != 0);
    return 0;
}

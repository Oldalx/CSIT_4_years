#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL, *rear = NULL;

void enqueue(int val) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("[Enqueued %d]\n", val);
}

void dequeue() {
    if (front == NULL) { printf("[Queue Underflow!]\n"); return; }
    struct Node *temp = front;
    front = front->next;
    if (front == NULL) rear = NULL;
    printf("[Dequeued %d]\n", temp->data);
    free(temp);
}

void peekFront() {
    if (front == NULL) { printf("[Queue Empty]\n"); return; }
    printf("[Front: %d]\n", front->data);
}

void peekRear() {
    if (rear == NULL) { printf("[Queue Empty]\n"); return; }
    printf("[Rear: %d]\n", rear->data);
}

void display() {
    if (front == NULL) { printf("[Queue Empty]\n"); return; }
    struct Node *temp = front;
    printf("QUEUE: Front -> ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("<- Rear\n");
}

void isEmpty() {
    if (front == NULL) printf("[Queue is Empty]\n");
    else               printf("[Queue is Not Empty]\n");
}

void count() {
    struct Node *temp = front;
    int c = 0;
    while (temp != NULL) { c++; temp = temp->next; }
    printf("[Total Elements: %d]\n", c);
}

int main() {
    int choice, val;
    do {
        printf("\n1.Enqueue 2.Dequeue 3.PeekFront 4.PeekRear 5.Display 6.isEmpty 7.Count 0.Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: printf("Value: "); scanf("%d", &val); enqueue(val); break;
            case 2: dequeue();   break;
            case 3: peekFront(); break;
            case 4: peekRear();  break;
            case 5: display();   break;
            case 6: isEmpty();   break;
            case 7: count();     break;
            case 0: printf("Exit!\n"); break;
            default: printf("[Invalid!]\n");
        }
    } while (choice != 0);
    return 0;
}
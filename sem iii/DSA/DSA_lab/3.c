#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int cq[MAX];
int front = -1, rear = -1;

void enqueue() {
    int val;
    if ((rear + 1) % MAX == front)
        printf("Circular Queue Full\n");
    else {
        printf("Enter value: ");
        scanf("%d", &val);
        if (front == -1) front = 0;
        rear = (rear + 1) % MAX;
        cq[rear] = val;
    }
}

void dequeue() {
    if (front == -1)
        printf("Circular Queue Empty\n");
    else {
        printf("Dequeued: %d\n", cq[front]);
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % MAX;
    }
}

void display() {
    if (front == -1)
        printf("Queue Empty\n");
    else {
        printf("Circular Queue: ");
        int i = front;
        while (1) {
            printf("%d ", cq[i]);
            if (i == rear) break;
            i = (i + 1) % MAX;
        }
        printf("\n");
    }
}

int main() {
    int ch;
    while (1) {
        printf("\n1.Enqueue 2.Dequeue 3.Display 4.Exit\n");
        scanf("%d", &ch);
        switch(ch) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Invalid");
        }
    }
}

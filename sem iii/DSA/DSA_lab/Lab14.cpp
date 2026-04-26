#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

struct Node *head = NULL;

void insertBegin(int val) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = val;
    if (head == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        head = newNode;
    } else {
        struct Node *tail = head->prev;
        newNode->next = head;
        newNode->prev = tail;
        tail->next = newNode;
        head->prev = newNode;
        head = newNode;
    }
    printf("[Inserted %d at Begin]\n", val);
}

void insertEnd(int val) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = val;
    if (head == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        head = newNode;
    } else {
        struct Node *tail = head->prev;
        tail->next = newNode;
        newNode->prev = tail;
        newNode->next = head;
        head->prev = newNode;
    }
    printf("[Inserted %d at End]\n", val);
}

void insertPos(int val, int pos) {
    if (pos == 1) { insertBegin(val); return; }
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = val;
    struct Node *temp = head;
    for (int i = 1; i < pos - 1; i++) {
        temp = temp->next;
        if (temp == head) { printf("[Invalid Position]\n"); free(newNode); return; }
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
    printf("[Inserted %d at pos %d]\n", val, pos);
}

void deleteBegin() {
    if (head == NULL) { printf("[List Empty]\n"); return; }
    if (head->next == head) {
        printf("[Deleted %d from Begin]\n", head->data);
        free(head); head = NULL; return;
    }
    struct Node *tail = head->prev;
    struct Node *temp = head;
    head = head->next;
    head->prev = tail;
    tail->next = head;
    printf("[Deleted %d from Begin]\n", temp->data);
    free(temp);
}

void deleteEnd() {
    if (head == NULL) { printf("[List Empty]\n"); return; }
    if (head->next == head) {
        printf("[Deleted %d from End]\n", head->data);
        free(head); head = NULL; return;
    }
    struct Node *tail = head->prev;
    tail->prev->next = head;
    head->prev = tail->prev;
    printf("[Deleted %d from End]\n", tail->data);
    free(tail);
}

void deleteVal(int val) {
    if (head == NULL) { printf("[List Empty]\n"); return; }
    struct Node *temp = head;
    do {
        if (temp->data == val) {
            if (temp == head && temp->next == head) {
                free(temp); head = NULL;
            } else {
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                if (temp == head) head = temp->next;
                free(temp);
            }
            printf("[Deleted %d]\n", val);
            return;
        }
        temp = temp->next;
    } while (temp != head);
    printf("[%d Not Found]\n", val);
}

void displayForward() {
    if (head == NULL) { printf("[List Empty]\n"); return; }
    struct Node *temp = head;
    printf("FWD: ");
    do {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(head)\n");
}

void displayBackward() {
    if (head == NULL) { printf("[List Empty]\n"); return; }
    struct Node *tail = head->prev;
    struct Node *temp = tail;
    printf("BWD: ");
    do {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    } while (temp != tail);
    printf("(tail)\n");
}

void search(int val) {
    if (head == NULL) { printf("[List Empty]\n"); return; }
    struct Node *temp = head;
    int pos = 1;
    do {
        if (temp->data == val) { printf("[Found %d at pos %d]\n", val, pos); return; }
        temp = temp->next;
        pos++;
    } while (temp != head);
    printf("[%d Not Found]\n", val);
}

void count() {
    if (head == NULL) { printf("[Nodes: 0]\n"); return; }
    struct Node *temp = head;
    int c = 0;
    do { c++; temp = temp->next; } while (temp != head);
    printf("[Total Nodes: %d]\n", c);
}

int main() {
    int choice, val, pos;
    do {
        printf("\n1.InsBeg 2.InsEnd 3.InsPos 4.DelBeg 5.DelEnd 6.DelVal 7.FwdDisplay 8.BwdDisplay 9.Search 10.Count 0.Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:  printf("Value: "); scanf("%d", &val); insertBegin(val); break;
            case 2:  printf("Value: "); scanf("%d", &val); insertEnd(val);   break;
            case 3:  printf("Value & Pos: "); scanf("%d %d", &val, &pos); insertPos(val, pos); break;
            case 4:  deleteBegin(); break;
            case 5:  deleteEnd();   break;
            case 6:  printf("Value: "); scanf("%d", &val); deleteVal(val);  break;
            case 7:  displayForward();  break;
            case 8:  displayBackward(); break;
            case 9:  printf("Value: "); scanf("%d", &val); search(val); break;
            case 10: count(); break;
            case 0:  printf("Exit!\n"); break;
            default: printf("[Invalid!]\n");
        }
    } while (choice != 0);
    return 0;
}

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
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL) head->prev = newNode;
    head = newNode;
    printf("[Inserted %d at Begin]\n", val);
}

void insertEnd(int val) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    if (head == NULL) {
        newNode->prev = NULL;
        head = newNode;
    } else {
        struct Node *temp = head;
        while (temp->next != NULL) temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }
    printf("[Inserted %d at End]\n", val);
}

void insertPos(int val, int pos) {
    if (pos == 1) { insertBegin(val); return; }
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = val;
    struct Node *temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;
    if (temp == NULL) { printf("[Invalid Position]\n"); free(newNode); return; }
    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != NULL) temp->next->prev = newNode;
    temp->next = newNode;
    printf("[Inserted %d at pos %d]\n", val, pos);
}

void deleteBegin() {
    if (head == NULL) { printf("[List Empty]\n"); return; }
    struct Node *temp = head;
    head = head->next;
    if (head != NULL) head->prev = NULL;
    printf("[Deleted %d from Begin]\n", temp->data);
    free(temp);
}

void deleteEnd() {
    if (head == NULL) { printf("[List Empty]\n"); return; }
    struct Node *temp = head;
    if (temp->next == NULL) {
        printf("[Deleted %d from End]\n", temp->data);
        free(temp); head = NULL; return;
    }
    while (temp->next != NULL) temp = temp->next;
    temp->prev->next = NULL;
    printf("[Deleted %d from End]\n", temp->data);
    free(temp);
}

void deleteVal(int val) {
    if (head == NULL) { printf("[List Empty]\n"); return; }
    struct Node *temp = head;
    while (temp != NULL && temp->data != val) temp = temp->next;
    if (temp == NULL) { printf("[%d Not Found]\n", val); return; }
    if (temp->prev != NULL) temp->prev->next = temp->next;
    else head = temp->next;
    if (temp->next != NULL) temp->next->prev = temp->prev;
    printf("[Deleted %d]\n", val);
    free(temp);
}

void displayForward() {
    if (head == NULL) { printf("[List Empty]\n"); return; }
    struct Node *temp = head;
    printf("FWD: NULL <-> ");
    while (temp != NULL) { printf("%d <-> ", temp->data); temp = temp->next; }
    printf("NULL\n");
}

void displayBackward() {
    if (head == NULL) { printf("[List Empty]\n"); return; }
    struct Node *temp = head;
    while (temp->next != NULL) temp = temp->next;
    printf("BWD: NULL <-> ");
    while (temp != NULL) { printf("%d <-> ", temp->data); temp = temp->prev; }
    printf("NULL\n");
}

void search(int val) {
    struct Node *temp = head;
    int pos = 1;
    while (temp != NULL) {
        if (temp->data == val) { printf("[Found %d at pos %d]\n", val, pos); return; }
        temp = temp->next; pos++;
    }
    printf("[%d Not Found]\n", val);
}

void count() {
    struct Node *temp = head;
    int c = 0;
    while (temp != NULL) { c++; temp = temp->next; }
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

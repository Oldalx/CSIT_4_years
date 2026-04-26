#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Node {
    int data;
    struct Node *next;
};

struct Node *hashTable[MAX];
int tableSize;

void initTable() {
    for (int i = 0; i < tableSize; i++)
        hashTable[i] = NULL;
}

int hashFunction(int key) {
    return key % tableSize;
}

void insert(int key) {
    int index = hashFunction(key);
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = key;
    newNode->next = NULL;

    if (hashTable[index] == NULL) {
        hashTable[index] = newNode;
        printf("[Inserted %d at index %d (no collision)]\n", key, index);
    } else {
        struct Node *temp = hashTable[index];
        while (temp != NULL) {
            if (temp->data == key) {
                printf("[%d Already Exists!]\n", key);
                free(newNode); return;
            }
            temp = temp->next;
        }
        newNode->next = hashTable[index];
        hashTable[index] = newNode;
        printf("[Inserted %d at index %d (chained)]\n", key, index);
    }
}

void search(int key) {
    int index = hashFunction(key);
    struct Node *temp = hashTable[index];
    int pos = 0;
    while (temp != NULL) {
        if (temp->data == key) {
            printf("[Found %d at index %d, chain pos %d]\n", key, index, pos);
            return;
        }
        temp = temp->next;
        pos++;
    }
    printf("[%d Not Found!]\n", key);
}

void deleteNode(int key) {
    int index = hashFunction(key);
    struct Node *temp = hashTable[index], *prev = NULL;
    while (temp != NULL) {
        if (temp->data == key) {
            if (prev == NULL) hashTable[index] = temp->next;
            else              prev->next = temp->next;
            free(temp);
            printf("[Deleted %d from index %d]\n", key, index);
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    printf("[%d Not Found!]\n", key);
}

void display() {
    printf("Index | Chain\n");
    printf("------+-----------\n");
    for (int i = 0; i < tableSize; i++) {
        printf("  %3d | ", i);
        if (hashTable[i] == NULL) {
            printf("EMPTY\n");
        } else {
            struct Node *temp = hashTable[i];
            while (temp != NULL) {
                printf("%d", temp->data);
                if (temp->next != NULL) printf(" -> ");
                temp = temp->next;
            }
            printf("\n");
        }
    }
}

int main() {
    int choice, key, n;

    printf("Enter table size: ");
    scanf("%d", &tableSize);
    initTable();

    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &key);
        insert(key);
    }

    do {
        printf("\n1.Insert 2.Search 3.Delete 4.Display 0.Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: printf("Value: "); scanf("%d", &key); insert(key); break;
            case 2: printf("Value: "); scanf("%d", &key); search(key); break;
            case 3: printf("Value: "); scanf("%d", &key); deleteNode(key); break;
            case 4: display(); break;
            case 0: printf("Exit!\n"); break;
            default: printf("[Invalid!]\n");
        }
    } while (choice != 0);

    return 0;
}

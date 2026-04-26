  #include <stdio.h>
#define MAX 100

int hashTable[MAX];
int tableSize;

void initTable() {
    for (int i = 0; i < tableSize; i++)
        hashTable[i] = -1;
}

int hashFunction(int key) {
    return key % tableSize;
}

void insert(int key) {
    int index = hashFunction(key);
    int start = index, probes = 0;
    while (hashTable[index] != -1 && hashTable[index] != -2) {
        if (hashTable[index] == key) { printf("[%d Already Exists!]\n", key); return; }
        index = (index + 1) % tableSize;
        probes++;
        if (index == start) { printf("[Table Full!]\n"); return; }
    }
    hashTable[index] = key;
    printf("[Inserted %d at index %d (%d probe(s))]\n", key, index, probes);
}

void search(int key) {
    int index = hashFunction(key);
    int start = index, probes = 0;
    while (hashTable[index] != -1) {
        if (hashTable[index] == key) {
            printf("[Found %d at index %d (%d probe(s))]\n", key, index, probes);
            return;
        }
        index = (index + 1) % tableSize;
        probes++;
        if (index == start) break;
    }
    printf("[%d Not Found!]\n", key);
}

void deleteNode(int key) {
    int index = hashFunction(key);
    int start = index;
    while (hashTable[index] != -1) {
        if (hashTable[index] == key) {
            hashTable[index] = -2;
            printf("[Deleted %d from index %d]\n", key, index);
            return;
        }
        index = (index + 1) % tableSize;
        if (index == start) break;  
    }
    printf("[%d Not Found!]\n", key);
}

void display() {
    printf("Index | Value\n");
    printf("------+--------\n");
    for (int i = 0; i < tableSize; i++) {
        if      (hashTable[i] == -1) printf("  %3d | EMPTY\n",   i);
        else if (hashTable[i] == -2) printf("  %3d | DELETED\n", i);
        else                         printf("  %3d | %d\n",       i, hashTable[i]);
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

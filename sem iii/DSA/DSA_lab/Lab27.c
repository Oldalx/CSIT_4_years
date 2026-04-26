#include <stdio.h>
#define MAX 100

int hashTable[MAX];
int tableSize;

// Initialize Hash Table
void initTable() {
    for (int i = 0; i < tableSize; i++)
        hashTable[i] = -1; // -1 means empty
}

// Hash Function
int hashFunction(int key) {
    return key % tableSize;
}

// Insert using Linear Probing
void insert(int key) {
    int index = hashFunction(key);
    int originalIndex = index;
    int probes = 0;

    // Linear probing - find next empty slot
    while (hashTable[index] != -1) {
        if (hashTable[index] == key) {
            printf("Element %d already exists at index %d.\n", key, index);
            return;
        }
        printf("  Collision at index %d! Probing next...\n", index);
        index = (index + 1) % tableSize;
        probes++;

        // Table is full
        if (index == originalIndex) {
            printf("Hash Table is Full! Cannot insert %d.\n", key);
            return;
        }
    }

    hashTable[index] = key;
    if (probes == 0)
        printf("Inserted %d at index %d (no collision).\n", key, index);
    else
        printf("Inserted %d at index %d after %d probe(s).\n", key, index, probes);
}

// Search using Linear Probing
void search(int key) {
    int index = hashFunction(key);
    int originalIndex = index;
    int probes = 0;

    while (hashTable[index] != -1) {
        if (hashTable[index] == key) {
            printf("Element %d found at index %d after %d probe(s).\n",
                    key, index, probes);
            return;
        }
        index = (index + 1) % tableSize;
        probes++;

        if (index == originalIndex) break;
    }
    printf("Element %d not found in hash table.\n", key);
}

// Delete using Linear Probing
void delete(int key) {
    int index = hashFunction(key);
    int originalIndex = index;

    while (hashTable[index] != -1) {
        if (hashTable[index] == key) {
            hashTable[index] = -2; // -2 = deleted (tombstone)
            printf("Element %d deleted from index %d.\n", key, index);
            return;
        }
        index = (index + 1) % tableSize;
        if (index == originalIndex) break;
    }
    printf("Element %d not found! Cannot delete.\n", key);
}

// Display Hash Table
void display() {
    printf("\n+-------+----------+\n");
    printf("| Index |  Element |\n");
    printf("+-------+----------+\n");
    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i] == -1)
            printf("|  %3d  |  EMPTY   |\n", i);
        else if (hashTable[i] == -2)
            printf("|  %3d  |  DELETED |\n", i);
        else
            printf("|  %3d  |  %5d   |\n", i, hashTable[i]);
    }
    printf("+-------+----------+\n");
}

// Count elements
void count() {
    int c = 0;
    for (int i = 0; i < tableSize; i++)
        if (hashTable[i] != -1 && hashTable[i] != -2)
            c++;
    printf("Total elements in table: %d\n", c);
}

// Load Factor
void loadFactor() {
    int c = 0;
    for (int i = 0; i < tableSize; i++)
        if (hashTable[i] != -1 && hashTable[i] != -2)
            c++;
    printf("Load Factor: %d / %d = %.2f\n", c, tableSize, (float)c / tableSize);
}

int main() {
    int choice, key, n;

    printf("Enter Hash Table Size: ");
    scanf("%d", &tableSize);
    initTable();

    printf("Enter number of elements to insert: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &key);
        insert(key);
    }

    do {
        printf("\n====== LINEAR PROBING MENU ======\n");
        printf("1. Insert Element\n");
        printf("2. Search Element\n");
        printf("3. Delete Element\n");
        printf("4. Display Hash Table\n");
        printf("5. Count Elements\n");
        printf("6. Load Factor\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: printf("Enter element to insert: ");
                    scanf("%d", &key);
                    insert(key); break;
            case 2: printf("Enter element to search: ");
                    scanf("%d", &key);
                    search(key); break;
            case 3: printf("Enter element to delete: ");
                    scanf("%d", &key);
                    delete(key); break;
            case 4: display(); break;
            case 5: count(); break;
            case 6: loadFactor(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 0);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

typedef struct Node { int data; struct Node *left, *right; } Node;

Node* newNode(int d) {
    Node* n = (Node*)malloc(sizeof(Node));
    n->data = d; n->left = n->right = NULL;
    return n;
}

Node* insert(Node* root, int d) {
    if (!root) return newNode(d);
    if (d < root->data) root->left = insert(root->left, d);
    else if (d > root->data) root->right = insert(root->right, d);
    return root;
}

Node* search(Node* root, int d) {
    if (!root || root->data == d) return root;
    return d < root->data ? search(root->left, d) : search(root->right, d);
}

Node* minNode(Node* root) {
    while (root->left) root = root->left;
    return root;
}

Node* deleteNode(Node* root, int d) {
    if (!root) return NULL;
    if (d < root->data) root->left = deleteNode(root->left, d);
    else if (d > root->data) root->right = deleteNode(root->right, d);
    else {
        if (!root->left) return root->right;
        if (!root->right) return root->left;
        Node* tmp = minNode(root->right);
        root->data = tmp->data;
        root->right = deleteNode(root->right, tmp->data);
    }
    return root;
}

void inorder(Node* root)  { if (root) { inorder(root->left); printf("%d ", root->data); inorder(root->right); } }
void preorder(Node* root) { if (root) { printf("%d ", root->data); preorder(root->left); preorder(root->right); } }
void postorder(Node* root){ if (root) { postorder(root->left); postorder(root->right); printf("%d ", root->data); } }

int main() {
    Node* root = NULL;
    int choice, val;

    do {
        printf("\n1.Insert 2.Delete 3.Search 4.Inorder 5.Preorder 6.Postorder 0.Exit\nChoice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: printf("Value: "); scanf("%d", &val); root = insert(root, val); break;
            case 2: printf("Value: "); scanf("%d", &val); root = deleteNode(root, val); break;
            case 3: printf("Value: "); scanf("%d", &val);
                    printf(search(root, val) ? "Found!\n" : "Not Found!\n"); break;
            case 4: printf("Inorder: ");   inorder(root);   printf("\n"); break;
            case 5: printf("Preorder: ");  preorder(root);  printf("\n"); break;
            case 6: printf("Postorder: "); postorder(root); printf("\n"); break;
        }
    } while(choice);

    return 0;
}

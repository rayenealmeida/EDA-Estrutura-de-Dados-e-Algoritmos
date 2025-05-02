#include <stdio.h>
#include <stdlib.h>

struct Node {
    int Key;
    int value;
    struct Node *left, *right;
};

struct Node* insert(struct Node* root , int Key, int value){
    if (root == NULL){
        root = malloc(sizeof(struct Node));
        root->Key = Key;
        root->value = value;
        root->left = root->right = NULL;
    } else if (Key < root->Key){
        root->left = insert(root->left, Key, value);
    } else if (Key > root->Key){
        root->right = insert(root->right, Key, value);
    } else {
        root->value = value;
    }
    return root;
}

int main() {
    struct Node* root = NULL;
    
    root = insert(root, 10, 100);
    root = insert(root, 5, 50);
    root = insert(root, 15, 150);

    printf("Raiz: %d -> %d\n", root->Key, root->value);

    return 0;
}

// busca
int search(struct Node* root, int key) {
    if (root == NULL) return -1; // não encontrado
    if (key == root->Key) return root->value;
    if (key < root->Key) return search(root->left, key);
    else return search(root->right, key);
}


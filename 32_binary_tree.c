#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* createNode(int data) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int main() {
    struct node *root = createNode(1);
    struct node *p1 = createNode(2);
    struct node *p2 = createNode(3);
    struct node *p3 = createNode(4);
    struct node *p4 = createNode(5);
    struct node *p5 = createNode(6);
    struct node *p6 = createNode(7);

    root->left = p1;
    root->right = p2;

    p1->left = p3;
    p1->right = p4;

    p2->left = p5;
    p2->right = p6;

    // Additional code for testing or further operations

    return 0;
}

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
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);

    /* Linking the nodes
        5
      /   \
      3   6
    /  \
    1   4   */

    p->left = p1;
    p->right = p2;

    p1->left = p3;
    p1->right = p4;

    // Additional code for testing or further operations

    return 0;
}

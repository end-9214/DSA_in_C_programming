#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *left;
  struct node *right;
};

struct node *createNode(int data){
  struct node *n;
  n = (struct node *)malloc(sizeof(struct node));
  n->data = data;
  n->left = NULL;
  n->right = NULL;
  return n;
};

void postOrder(struct node *root){
  if(root!=NULL){
    post(root->left);
    post(root->right);
    printf("%d ", root->data);
  }
};


int main(){
  // Constructing the root node - Using Function (Recommended)
  struct node *p = createNode(2);
  struct node *p1 = createNode(4);
  struct node *p2 = createNode(6);
  struct node *p3 = createNode(5);
  struct node *p4 = createNode(1);


  // Linking the root node with left and right children
  p->left = p1;
  p->right = p2;
  p1->left = p3;
  p1->right = p4;


  postOrder(p);
  


  return 0;
}
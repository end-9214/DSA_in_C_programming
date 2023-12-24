#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *left;
  struct node *right;
};

struct node* createNode(int data){
  struct node *newNode = (struct node*)malloc(sizeof(struct node));
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

void display(struct node *root){
  if(root!=NULL){
    display(root->left);
    printf("%d ",root->data);
    display(root->right);
  }
}

struct node *deleteNode(struct Node * root, int value){
  // search for the node to be deleted
  if(value < root->data){
    deleteNode(root->left, value);
  }else if(value > root->data){
    deleteNode(root->right, value);
  }
  // Deletion strategy
  else{
    // case 1 : No child
    if(root->left == NULL && root->right == NULL){
      free(root);
      root = NULL;
    }
    // case 2 : 1 child
    else if(root->left == NULL){
      struct node *temp = root;
      root = root->right;
      free(temp);
    }
    else if(root->right == NULL){
      struct node *temp = root;
      root = root->left;
      free(temp);
    }
    // case 3 : 2 children
    else{
      struct node *temp = findMin(root->right);
      root->data = temp->data;
      root->right = deleteNode(root->right, temp->data);
    }

    
  }
};


int main(){

  struct node *p = createNode(5);
  struct node *p1 = createNode(3);
  struct node *p2 = createNode(6);
  struct node *p3 = createNode(1);
  struct node *p4 = createNode(4);

  
  p->left = p1;
  p->right = p2;

  p1->left = p3;
  p1->right = p4;

  display(p);



  return 0;
}
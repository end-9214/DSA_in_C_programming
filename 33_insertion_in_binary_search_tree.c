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

void Insert(struct node *root, int key){
  struct node *prev = NULL;
  while(root!=NULL){
    prev = root;
    if(key==root->data){
      printf("Cannot insert %d, already in BST\n",key);
      return;
    }
    else if(key<root->data){
      root = root->left;
    }
    else{
      root = root->right;
    }
  }
  struct node *new = createNode(key);
  if(key<prev->data){
    prev->left = new;
  }
  else{
    prev->right = new;
  }
}


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

  Insert(p, 7);

  printf("\n");
  display(p);
  


  return 0;
}
#include<stdio.h>
#include<stdlib.h>

struct Node{
  int key;
  struct Node *left;
  struct Node * right;
  int height; 
};

int getHeight(struct Node *n){
  if(n==NULL){
    return 0;
  return n->height;
  
  }
}

struct Node *createNode(int key){
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->key = key;
  newNode->left = NULL;
  newNode->right = NULL;
  newNode->height = 1;
  return newNode;
};

int max(int a, int b){
  return (a>b)?a:b;

}

int getBalanceFactor(struct Node *n){
  if(n==NULL){
    return 0;
  
  }
  return getHeight(n->left)-getHeight(n->right);
}

struct Node * rightRotate(struct Node * y){
  struct Node *x = y->left;
  struct Node * T2 = x->right;


  x->right = y;
  y->left = T2;

  y->height = max(getHeight(y->right), getHeight(y->left))+1;
  x->height = max(getHeight(x->right), getHeight(x->left))+1;

  return x;
}

struct Node * leftRotation(struct Node * x){
  struct Node *y = x->right;
  struct Node *T2 = y->left;

  y->left=x;
  x->right = T2;

  x->height = max(getHeight(x->right), getHeight(x->left))+1;
  y->height = max(getHeight(y->right), getHeight(y->left))+1;

  return y;

};

struct Node * insert(struct Node * newNode, int key){
  if(newNode == NULL)
    return createNode(key);
  
  
  if(key<newNode->key)
    newNode -> left = insert(newNode->left, key);

  else if(key>newNode->key)
    newNode -> right = insert(newNode->right, key);
    return newNode;
  newNode->height =1+ max(getHeight(newNode->left), getHeight(newNode->right));
  int bf = getBalanceFactor(newNode);

  // Left Left Case
    if(bf>1 && key < newNode->left->key){
      return rightRotate(newNode);
    }
  // Right Right Case
    if(bf<-1 && key > newNode->right->key){
      return leftRotation(newNode);
    }
  // Left Right Case
    if(bf>1 && key < newNode->left->key){
      newNode->left = leftRotation(newNode->left);
      return rightRotate(newNode);
    }

  // Right Left Case
    if(bf<-1 && key > newNode->right->key){
      newNode->right = rightRotate(newNode->right);
      return leftRotation(newNode);
    }
    return newNode;
};

int main(){

  struct Node *root = NULL;
  root = insert(root, 1);
  root = insert(root, 2);
  root = insert(root, 4);
  root = insert(root, 5);
  root = insert(root, 6);
  root = insert(root, 3);





  return 0;
}
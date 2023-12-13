#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node {
  int data ;
  struct node *left ;
  struct node *right ;
};

struct node *createNode (int data){
  struct node *newNode = (struct node *)malloc(sizeof(struct node)) ;
  newNode->data = data ;
  newNode->left = NULL ;
  newNode->right = NULL ;
  return newNode ;
}

struct node *insertNode (struct node *root, int data){
  if(root == NULL){
    root = createNode(data) ;
  }
  else if(data <= root->data){
    root->left = insertNode(root->left, data) ;
  }
  else{
    root->right = insertNode(root->right, data) ;
  }
  return root ;
};

int searchNode (struct node *root, int data){
  if(root == NULL){
    return 0 ;
  }
  else if(root->data == data){
    return 1 ;
  }
  else if(data <= root->data){
    return searchNode(root->left, data) ;
  }
  else{
    return searchNode(root->right, data) ;
  }
}

int main (){

  struct node *root = NULL ;
  root = insertNode(root, 15) ;
  root = insertNode(root, 10) ;

  int number ;
  printf("Enter number be searched\n") ;
  scanf("%d", &number) ;

  if(searchNode(root, number) == 1){
    printf("Found\n") ;
  }
  else{
    printf("Not Found\n") ;
  }


  

  return 0 ;
}
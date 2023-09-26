#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node *next;
};

void linkedListTraversal(struct Node *ptr){
  while(ptr != NULL){
    printf("Element: %d\n",ptr->data);
    ptr = ptr->next;
  }
};

int isFull(struct Node * top){
  struct Node * p = (struct Node *)malloc(sizeof(struct Node));
  if(p ==NULL){
    return 1;
  }
  else{
    return 0;
  }
}

int isEmpty(struct Node * top){
  if(top == NULL){
    return 1;
  }
  else{
    return 0;
  }
}

struct Node * push(struct Node * top, int x){
  if(isFull(top)){
    printf("Stack Overflow\n");
  }else{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = x;
    n->next = top;
    top = n;
    return top;
  }
};

int main(){
  struct Node * top = NULL;
  top = push(top, 78);
  top = push(top, 7);
  top = push(top, 8);

  linkedListTraversal(top);

  return 0;
}
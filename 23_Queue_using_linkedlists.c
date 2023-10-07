#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node *next;
};

void LinkedlistTraversal(struct Node *ptr){
  printf("Printing the elements of this linked list\n");
  while(ptr!=NULL){
    printf("Element: %d\n",ptr->data);
    ptr = ptr->next;

  }
}

void enqueue(struct Node * f,struct Node *r, int val){
  struct Node *n = (struct Node *)malloc(sizeof(struct Node));
  if(n==NULL){
    printf("Queue is full\n");

  }else{
    n->data = val;
    n->next = NULL;
    if(f==NULL){
      f=r=NULL;
    }else{
      r->next = n;
      r= n;
    }
  }

}

int main(){
  struct Node *f = NULL;
  struct Node *r = NULL;
  LinkedlistTraversal(f);


  return 0;
}
#include<stdio.h>
#include<stdlib.h>

  struct Node *f = NULL;
  struct Node *r = NULL;

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

void dequeue(){
  int val = -1;
  struct Node *ptr = f;
  if(ptr==NULL){
    printf("Queue is empty\n");

  }else{
    f = f->next;
    val = ptr->data;
    free(ptr);

  }
}

void enqueue(int val){
  struct Node *n = (struct Node *)malloc(sizeof(struct Node));
  if(n==NULL){
    printf("Queue is full\n");

  }else{
    n->data = val;
    n->next = NULL;
    if(f==NULL){
      f=r=n;
    }else{
      r->next = n;
      r= n;
    }
  }

}

int main(){

  enqueue(34);
  enqueue(45);
  enqueue(48);
  enqueue(65);
  printf("After enqueue operation\n");
  LinkedlistTraversal(f);

  dequeue();
  printf("After dequeue operation\n");
  LinkedlistTraversal(f);

  return 0;
}
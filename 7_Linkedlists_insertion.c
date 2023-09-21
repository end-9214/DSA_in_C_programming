#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node *next;

};

void linkedListTraversal(struct Node *ptr){
  while(ptr!=NULL){
    printf("element: %d\n",ptr->data);
    ptr = ptr->next;

  }
}

struct Node * insertAtFirst(struct Node *head, int data){
  struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->next = head;
  ptr->data = data;
  return ptr;

}

int main(){

  struct Node * head;

  head = (struct Node *)malloc(sizeof(struct Node));
   head -> data = 7;
    head -> next = NULL;

  linkedListTraversal(head);
  




  return 0;

}
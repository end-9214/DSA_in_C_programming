#include<stdio.h>
#include<stdlib.h>

struct Node {
  int data;
  struct Node * next;
};

void linkedTraversal(struct Node * head){
  
  struct Node * ptr = head;
  do{
    printf("element: %d\n",ptr -> data);
    ptr = ptr->next;
  }while(ptr!=head);
};

int main(){
  struct Node * head;
  struct Node * second;
  struct Node * third;

  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));

  head -> data = 7;
  head -> next = second;

  second -> data = 11;
  second -> next = third;

  third -> data = 66;
  third -> next = head;

  printf("Circular linked list before deletion\n");
  linkedTraversal(head);



  return 0;

}
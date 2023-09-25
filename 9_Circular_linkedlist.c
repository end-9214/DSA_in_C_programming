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

struct Node * insertionAtFirst(struct Node * head, int data){
  struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr -> data = data;


  struct Node * p = head -> next;
  while(p->next!=head){
    p = p->next;
  }
  // At this point p points to the last node of this circular linked list
  p->next = ptr;
  ptr->next = head;
  head = ptr;
  return head;


}

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
  head = insertionAtFirst(head, 56);
  printf("Circular linked list after insertion\n");
  linkedTraversal(head);




  return 0;

}
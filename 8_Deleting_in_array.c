#include<stdio.h>
#include<stdlib.h>


struct Node{
  int data;
  struct Node * next;

};

void linkedTraversal(struct Node * ptr){

  while(ptr!=NULL){
    printf("element: %d\n",ptr -> data);
    ptr = ptr->next;

  }
}

// case 1
// deletion at first 

struct Node * deletionAtFirst(struct Node * head){
  struct Node * ptr = head;
  head = head -> next;
  free(ptr);
  return head;

}

// case 2
// deletion at index

struct Node * deletionAtIndex(struct Node * head, int index){
  struct Node *p = head;
  struct Node *ptr = head->next;
  int i = 0;
  while (i!=index-1){
    p = p-> next;
    ptr = ptr->next;
    i++;

  }
  p->next = ptr->next;
  free(ptr);
  return head;

}

// case 3 
// deletion at end

struct Node * deletionAtEnd(struct Node * head){
  struct Node *p = head;
  struct Node * ptr =  head -> next;
  while (ptr->next!=NULL){
    p=p->next;
    ptr = ptr->next;

  }
  p->next = NULL;
  free(ptr);
  return head;

}

int main(){

  struct Node * head;
  struct Node * second;
  struct Node * third;
  struct Node * fourth;
  struct Node * fifth;
  struct Node * sixth;




  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  fourth = (struct Node *)malloc(sizeof(struct Node));
  fifth = (struct Node *)malloc(sizeof(struct Node));
  sixth = (struct Node *)malloc(sizeof(struct Node));




  head->data = 7;
  head->next = second;

  second->data = 11;
  second->next = third;

  third->data = 66;
  third->next = fourth;

  fourth->data = 99;
  fourth->next = fifth;

  fifth->data = 101;
  fifth->next = sixth;

  sixth->data = 121;
  sixth->next = NULL;



  linkedTraversal(head);
  printf("After deletion at first\n");
  head = deletionAtFirst(head);
  linkedTraversal(head);
  printf("After deletion at index\n");
  head = deletionAtIndex(head,2);
  linkedTraversal(head);
  printf("After deletion at end\n");
  head = deletionAtEnd(head);
  linkedTraversal(head);
  


  return 0;

}
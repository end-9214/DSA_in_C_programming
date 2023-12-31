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
// Case 1 
struct Node * insertAtFirst(struct Node *head, int data){
  struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->next = head;
  ptr->data = data;
  return ptr;

}

// Case 2
// insert at index

struct Node * insertAtIndex(struct Node * head, int data, int index){
  struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
  struct Node * p = head;
  int i = 0;


  while(i!=index-1){
    p = p->next;
    i++;

  };

  ptr->data = data;
  ptr->next = p->next;
  p->next = ptr;
 
  return head;





}

// Case 3
// insertion at End
struct Node * insertAtEnd(struct Node * head, int data){
  struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
   ptr->data = data;
   struct Node *p = head;


   while(p->next!=NULL){
    p = p->next;


   }

   p->next = ptr;
   ptr->next = NULL;
   return head;
    

}

int main(){

  struct Node * head;

  head = (struct Node *)malloc(sizeof(struct Node));
  struct Node * second;
  second = (struct Node *)malloc(sizeof(struct Node));
  struct Node * third;
  third = (struct Node *)malloc(sizeof(struct Node));
  struct Node * fourth;
  fourth = (struct Node *)malloc(sizeof(struct Node));




  head -> data = 7;
  head -> next = second;

  second -> data = 11;
  second ->next= third;

  third -> data= 66;
  third -> next = fourth;

  fourth -> data = 99;
  fourth -> next = NULL;


  linkedListTraversal(head);
  printf("After insertion at first\n");
  head = insertAtFirst(head,56);
  linkedListTraversal(head);

  printf("After insertion at index\n");
  head = insertAtIndex(head,57,1);
  linkedListTraversal(head);

  printf("After insertion at End\n");
  head = insertAtEnd(head,58);
  linkedListTraversal(head);








  return 0;

}
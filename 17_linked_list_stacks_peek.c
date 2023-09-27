#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  int *next;
};

void likedListTraversal(struct Node * ptr){
  while(ptr != NULL){
    printf("Element: %d\n",ptr->data);
    ptr = ptr->next;
  }
};

int peek(struct Node * ptr, int i){
  struct Node * p = ptr;
  for(int j = 0; (j<i-1 && p!=NULL); j++){
    p = p->next;
  }
  if(p!=NULL){
    return p->data;
  }else{
    return -1;
  }
} 



int main(){

  struct Node * head;
  struct Node * second;
  struct Node * third;
  struct Node * fourth;


  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  fourth = (struct Node *)malloc(sizeof(struct Node));

  head -> data = 7;
  head -> next = second;

  second -> data = 11;
  second ->next= third;


  third -> data= 66;
  third -> next = fourth;

  fourth -> data = 99;
  fourth -> next = NULL;

  likedListTraversal(head);

  printf("Value at index %d is %d\n",1,peek(head,1));
  printf("Value at index %d is %d\n",3,peek(head,3));
  return 0;
}

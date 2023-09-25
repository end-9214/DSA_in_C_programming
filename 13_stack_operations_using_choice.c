#include<stdio.h>
#include<stdlib.h>

struct stack {
  int size;
  int top;
  int *arr;
};

void display(struct stack * ptr){
  for(int i=0;i<=ptr->top;i++){
    printf("%d\n",ptr->arr[i]);
  }
}

void isFull(struct stack * ptr){
  if(ptr->top==ptr->size-1){
    printf("Stack is full\n");
  }
  else{
    printf("Stack is not full\n");
  }
};

void isEmpty(struct stack * ptr){
  if(ptr->top==-1){
    printf("Stack is empty\n");
  }
  else{
    printf("Stack is not empty\n");
  }
};


int pop(struct stack * ptr){
  if(ptr->top==-1){
    printf("Stack underflow\n");
  }
  else{
    int val = ptr->arr[ptr->top];
    ptr->top--;
    return val;
  }
}

int push(struct stack * ptr,int element){
  if(ptr->top==ptr->size-1){
    printf("Stack overflow\n");
  }
  else{
    ptr->top++;
    ptr->arr[ptr->top]=element;
  }
}


int main(){
  struct stack *s = (struct stack *)malloc(sizeof(struct stack));
  s->size = 10;
  s->top = -1;
  s->arr = (int *)malloc(s->size * sizeof(int));


  s->arr[0]=1;
  s->top++;

  s->arr[1]=2;
  s->top++;

  s->arr[2]=3;
  s->top++;

  s->arr[3]=4;
  s->top++;

  printf("The stack before any operation performed\n");
  display(s);

  int choice;
  int element;
  printf("Enter the choice of operation to be performed\n");
  printf("1. Push\n");
  printf("2. Pop\n");

  scanf("%d",&choice);
  if(choice==1){
    printf("enter the element to be pushed: \n");
    scanf("%d",&element);

    push(s,element);
    printf("The stack after push operation\n");
    display(s);
  }
  else if(choice==2){
    pop(s);
    printf("The stack after pop operation\n");
    display(s);
  }
  else{
    printf("Invalid choice\n");
  }



  return 0;
}
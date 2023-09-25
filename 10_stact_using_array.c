#include<stdio.h>
#include<stdlib.h>


struct stack{
  int size;
  int top;
  int * arr;

};

int isEmpty(struct stack * ptr){
    if(ptr->top==-1){
      return 1;

    }
    else{
      return 0;
    }
}

int isFull(struct stack * ptr){
  if(ptr->top==ptr->size-1){
    return 1;
  }
  else{
    return 0;
  }
}

int main(){

  // struct stack s;
  // s.size = 80;
  // s.top = -1;
  // s.arr = (int *)malloc(s.size * sizeof(int));


  struct stack *s;
  //s->size = 3;
  
  s->size = 5;
  s->top = -1;
  s->arr = (int *)malloc(s->size * sizeof(int));

  // push an element manually
  // s->arr[0]=7;
  // s->top++;

  s->arr[0]=1;
  s->top++;

  s->arr[1]=2;
  s->top++;

  s->arr[2]=3;
  s->top++;



  // to check if stack is empty
  if(isEmpty(s)){
    printf("The stack is empty\n");

  }
  else{
    printf("The stack is not empty\n");
  }

  if(isFull(s)){
    printf("the stack if full\n");

  }
  else{
    printf("the stack is not full\n");

  }

  return 0;
}
#include<stdio.h>
#include<stdlib.h>

struct stack{
  int size;
  int top;
  int *arr;
};

void display(struct stack * ptr){
  for(int i = 0; i<=ptr->top; i++){
    printf("%d\n",ptr->arr[i]);
  }
};

int stackTop(struct stack * ptr){
  return ptr->arr[ptr->top];
};

int stackBottom(struct stack * ptr){
  return ptr->arr[0];
};

int main(){

  struct stack *s = (struct stack *)malloc(sizeof(struct stack));
  s->size = 10;
  s->top= -1;
  s->arr=(int *)malloc(s->size * sizeof(int));

  s->arr[0]=1;
  s->top++;

  s->arr[1]=2;
  s->top++;

  s->arr[2]=3;
  s->top++;

  s->arr[3]=4;
  s->top++;

  s->arr[4]=5;
  s->top++;

  s->arr[5]=6;
  s->top++;

  printf("Stack top is %d\n",stackTop(s));
  printf("Stack bottom is %d\n",stackBottom(s));


  return 0;
}
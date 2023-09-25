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

int pop(struct stack *ptr){
  if(ptr->top==-1){
    printf("Stack underflow\n");
  }
  else{
    int val = ptr->arr[ptr->top];
    ptr->top--;
    return val;

  }
};

int main(){

  struct stack * s = (struct stack *)malloc(sizeof(struct stack));
  s->size = 10;
  s->top = -1;
  s->arr=(int *)malloc(s->size * sizeof(int));

  s->arr[0]=1;
  s->top++;

  s->arr[1]=2;
  s->top++;

  s->arr[2]=3;
  s->top++;

  s->arr[3]=4;
  s->top++;

  printf("The stack before pop operation\n");
  display(s);

  int element = pop(s);
  
  printf("The stack after pop operation\n");
  display(s);

  printf("The element popped is %d\n",element);

  return 0;
}

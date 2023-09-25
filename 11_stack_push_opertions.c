#include<stdio.h>
#include<stdlib.h>

struct stack{
  int size;
  int top;
  int * arr;
};

int isFull(struct stack * ptr){
  if(ptr->top==ptr->size-1){
    return 1;
  }
  else{
    return 0;

  }
};




int main(){
  struct stack *s =(struct stack *)malloc(sizeof(struct stack));
  s->top = -1;
  s->size = 5;
  s->arr = (int *)malloc(s->size *sizeof(int));

  

  s->arr[0]=1;
  s->top++;

  s->arr[1]=2;
  s->top++;

  s->arr[2]=3;
  s->top++;

  s->arr[3]=4;
  s->top++;

  int element;
  
  if(isFull(s)){
    printf("The stack is full");

  }
  else{
  printf(" enter the element to be pushed: \n");
  scanf("%d",&element);
  s->top++;
  s->arr[s->top]=element;
  }

  printf("The stack elements are: \n");
  for(int i=0;i<=s->top;i++){
    printf("%d\n",s->arr[i]);
  }
  printf("after the operation: push\n");

  if(isFull(s)){
    printf("The stack is full");

  }
  else{
    printf("The stack is not full");
  }

  return 0;

}
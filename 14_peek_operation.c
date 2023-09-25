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
};

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

// peak operation
int Peak(struct stack * ptr, int i){
  int arrInd = ptr->top - i + 1;
  if(arrInd<0){
    printf("Not a valid position for the stack\n");

  }
  else{
    return ptr->arr[arrInd];

  }
}

int main(){
  struct stack *s = (struct stack *)malloc(sizeof(struct stack));
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
  int Index;
  printf("Enter the index of the element you want to peak\n");
  scanf("%d",&Index);
  
  printf("The element at position 2 is %d\n",Peak(s,Index));

   

  return 0;
}


#include<stdio.h>
#include<stdlib.h>

struct stack{
  int size;
  int top;
  char * arr;
};

void display(struct stack *ptr){
  for(int i=0;i<=ptr->top;i++){
    printf("%c ", ptr->arr[i]);
  };
};

int push(struct stack *ptr, char val){
  if(ptr->top == ptr->size-1){
    printf("Stack Overflow");
  }else{
    ptr->top++;
    ptr->arr[ptr->top] = val;
  }
};

char pop(struct stack *ptr){
  if(ptr->top == -1){
    printf("Stack Underflow");

  }else{
    char val = ptr->arr[ptr->top];
    ptr->top--;
    return val;
  }
}

int main(){

  struct stack *s;
  s->size=100;
  s->top=-1;
  s->arr=(char *)malloc(s->size * sizeof(char));

  // Pushing an element manually
  s->arr[0] = 'a';
  s->top++;

  // Pushing an element manually
  s->arr[1] = 'b';
  s->top++;

  // Pushing an element manually
  s->arr[2] = 'c';
  s->top++;

  s->arr[3] = 'd';
  s->top++;

  s->arr[4] = 'e';
  s->top++;

  s->arr[5] = 'f';
  s->top++;
  


  // Printing the stack
  display(s);

  //Pushing an element manually
  char element;
  printf("\nEnter the element you want to push\n");
  scanf("%c",&element);
  push(s,element);
  printf("Now the stack is\n");
  display(s);
  // Popping an element manually
  char val = pop(s);
  printf("\nWe popped '%c' from the stack\n", val);
  printf("Now the stack is\n");
  display(s);



  return 0;
}
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

int main(){

  struct stack *s;
  s->size=10;
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


  // Printing the stack
  display(s);


  return 0;
}
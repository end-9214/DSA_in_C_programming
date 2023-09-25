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


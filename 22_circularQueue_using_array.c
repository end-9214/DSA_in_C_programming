#include<stdio.h>
#include<stdlib.h>

struct circularqueue{
  int size;
  int f;
  int r;
  int *arr;
};

void enqueue(struct circularqueue *q, int val){
  if((q->r+1)%q->size==q->f){
    printf("circularQueue is Full\n");
  }else{
    q->r=(q->r+1)%q->size;
    q->arr[q->r]=val;
  }
}

void display(struct circularqueue *q){
  for (int i=0;i<q->size;i++){
    printf("%d/n",q->arr[i]);
  }
}

int main(){
  struct circularqueue *q;
  q->size = 4;
  q->f = q->r = 0;
  q->arr=(int *)malloc(q->size * sizeof(int));

  enqueue(q,12);
  enqueue(q,13);
  enqueue(q,14);
  enqueue(q,15);

  display(q);

  printf("\ntrying to add one more element to the circularqueue\n");

  enqueue(q,16);

  return 0;
}
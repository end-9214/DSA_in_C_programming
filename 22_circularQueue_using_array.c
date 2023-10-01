#include<stdio.h>
#include<stdlib.h>

struct queue{
  int size;
  int f;
  int r;
  int *arr;
};

void enqueue(struct queue *q, int val){
  if((q->r+1)%q->size==q->f){
    printf("Queue is Full\n");
  }else{
    q->r=(q->r+1)%q->size;
    q->arr[q->r]=val;
  }
}

void display(struct queue *q){
  for (int i=0;i<q->size;i++){
    printf("%d ",q->arr[i]);
  }
}

int main(){
  struct queue *q;
  q->size = 4;
  q->f = q->r = -1;
  q->arr=(int *)malloc(q->size * sizeof(int));

  enqueue(q,12);
  enqueue(q,13);
  enqueue(q,14);
  enqueue(q,15);

  display(q);

  printf("\ntrying to add one more element to the queue\n");

  enqueue(q,16);




  return 0;
}
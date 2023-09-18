#include<stdio.h>

void display(int arr[], int size){
  for (int i=0;i<size;i++){
    printf("%d ", arr[i]);

  }
}

int indexDeletion(int arr[], int size, int index){
  for (int i=index;i<size-1;i++){
    arr[i]=arr[i+1];

  }
}

int main(){
  int arr[100]={10,12,16,17,65};
  int size = 5;
  display(arr,size);
  printf("\n");
  int index;
  printf("Enter the index at which element is to be deleted: ");
  scanf("%d",&index);
  indexDeletion(arr,5,index);
  size = size-1;
  display(arr,size);
  return 0;
};
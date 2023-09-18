#include<stdio.h>

void display(int arr[], int n){
  for (int i=0;i<n;i++){
    printf("%d ", arr[i]);

  }
}

int indexInsertion(int arr[], int size, int element, int capacity, int index) {
  if (size >= capacity) {
    printf("Insertion not possible\n");
    return 0; // Indicate failure
  }
  for (int i = size - 1; i >= index; i--) {
    arr[i + 1] = arr[i];
  }
  arr[index] = element;
  return 1; // Indicate success
}


int main(){
  int arr[100] = {10,12,16,17,65};
  int size = 5;
  display(arr,size);
  printf("\n");
  

  int element;
  printf("Enter the element to be inserted: ");
  scanf("%d",&element);

  int index;
  printf("Enter the index at which element is to be inserted: ");
  scanf("%d",&index);

  indexInsertion(arr,size,element,100, index);
  size += 1;
  display(arr,size);


  return 0;

}
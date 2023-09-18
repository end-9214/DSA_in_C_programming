#include<stdio.h>

int linearSearch(int arr[], int size, int element){
  for (int i=0;i<size;i++){
    if(arr[i]==element){
      return i;
    }
  }
  return -1;
}

int main(){
  int arr[100]={123,14,12,32,4,6,54,43};
  int size = sizeof(arr)/sizeof(int);
  int element;
  printf("Enter the element to be searched: ");
  scanf("%d",&element);

  int searchIndex=linearSearch(arr,size,element);
  printf("The element %d was found at index %d\n",element,searchIndex);

  return 0;
}
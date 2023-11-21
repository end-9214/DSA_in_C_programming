#include<stdio.h>
#include<stdlib.h>

void printArray(int *A, int n){
  for (int i=0; i<=n; i++){
    printf("%d ", A[i]);
  }
  printf("\n");
}

void quickSort(int A[], int low, int high){
  int partitionIndex; // Index of pivot after partition

  partitionIndex = partition(A, low, high);
  quickShort(A, low, partitionIndex-1); // Sort left subarray
  quickSort(A, partitionIndex+1, high); // Sort right subarray


}

int main(){
  int A[] = {3, 5, 2, 1, 4};
  int n=5;
  printArray(A, n);
  quickSort(A, 0, n-1);
  printArray(A, n);
  
  return 0;
}
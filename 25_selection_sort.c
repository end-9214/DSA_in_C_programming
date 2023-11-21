#include<stdio.h>
#include<stdlib.h>

void printArray(int *A, int n){
  for (int i = 0; i < n; i++){
    printf("%d ", A[i]);
  }
  printf("\n");
}

void selectionSort(int *A, int n){
  printf("Running the selection sort algorithm\n");
  for(int i=0; i<n-1;i++){
    int index_min = i;
    for(int j=i+1; j<n; j++){
      if (A[j] < A[index_min]){
        index_min = j;
      }else{
        continue;
      }
    }
    // Swapping the elements
    int temp = A[i];
    A[i] = A[index_min];
    A[index_min] = temp;
  }

}

int main(){
  int A[] = {3, 5, 2, 1, 4};
  int n = 5;
  printArray(A, n);
  selectionSort(A, n);
  printArray(A, n);

  return 0;
}

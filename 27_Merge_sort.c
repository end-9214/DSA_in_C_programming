#include<stdio.h>
#include<stdlib.h>

void printArray(int *A, int n){
  for(int i = 0; i <= n; i++){
    printf("%d ", A[i]);
  }
  printf("\n");
}

void merge (int A[], int mid, int low, int high){
  int i, j, k, B[100];
  i= low;
  j = mid +1;

  k= low;
  while(i<=mid && j<=high){
    if(A[i] < A[j]){
      B[k] = A[i];
      i++;
      k++;
    }
    else{
      B[k] = A[j];
      j++;
      k++;
    }
  }
}

void mergeSort(int A[], int low, int high){
  int mid;
  if (low < high){
     mid =  (low+high)/2; 
  }
}

int main(){


  return 0;
}
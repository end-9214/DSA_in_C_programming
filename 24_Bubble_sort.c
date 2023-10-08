#include<stdio.h>
#include<stdlib.h>

void printArray(int A[], int n){
  printf("The elements in the array are : \n");
  for(int i=0;i<n;i++){
    printf("%d ", A[i]);
  }
  printf("\n");
}

void bubbleSort(int *A, int n){
  for( int i = 0;i<n-1;i++){ // for number of passes

    for(int j = 0;j<n-1-i;j++){  // for number of comarisons in each pass
      if(A[j]>A[j+1]){
        int temp = A[j];
        A[j] = A[j+1];
        A[j+1] = temp;
      
      }
    } 
  }
}

int main(){
  int A[]= {12,32,41,51,231,21,23,15,16,181,321,5,5432,423,43,54,6};
  int n = sizeof(A)/sizeof(A[0]);

  printf("Size of our array is : %d\n", n);
  printf("\n");
  printf("Before sorting : \n");
  printArray(A, n);
  printf("\n");
  printf("After sorting : \n");
  bubbleSort(A, n);
  printArray(A, n);
  
  return 0;
}
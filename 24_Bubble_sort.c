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
  int temp;
  int isSorted = 0; // flag variable to check if the array is sorted or not
  for( int i = 0;i<n-1;i++){ // for number of passes
    isSorted = 1; // initially array is sorted
    for(int j = 0;j<n-1-i;j++){  // for number of comarisons in each pass
      if(A[j]>A[j+1]){
        temp = A[j];
        A[j] = A[j+1];
        A[j+1] = temp;
        isSorted = 0; // if swapping happens then array is not sorted
      
      }
      }
    }
  if(isSorted){
        return; // if array is sorted then return 
  }
}


int main(){
  int A[]= {12,32,41,51,231,21,23,15,16,181,321,5,5432,423,43,54,6};
  int A1[] = {1,2,3,4,5,6,7,8,9,10};
  int n = sizeof(A)/sizeof(A[0]);
  int n1 = sizeof(A1)/sizeof(A1[0]);

  printf("Size of our first array is : %d\n", n);
  printf("\n");
  printf("Before sorting : \n");
  printArray(A, n);
  printf("\n");
  printf("After sorting : \n");
  bubbleSort(A, n);
  printArray(A, n);

  printf("\n");
  printf("Size of our second array is : %d\n", n1);
  printf("\n");
  printf("Before sorting : \n");
  printArray(A1, n1);
  printf("\n");
  printf("After sorting : \n");
  bubbleSort(A1, n1);
  printArray(A1, n1);

  return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main(){
    int array[100];
    int n;
    printf("enter the no. of elements you want to enter :\n ");
    
    scanf("%d",&n);

    printf("enter the elements : \n");


    for (int i=0;i<n;i++){
      scanf("%d",&array[i]);
    

    };
    
    for (int j=0;j<n;j++){
      printf(" %d ",array[j]);
    };

    printf("\n");

    int element;
    printf("enter the element you want to insert : \n");
    scanf("%d",&element);
    int index;
    printf("enter the index at which you want to insert the element : \n");
    scanf("%d",&index);

    for (int k=n-1;k>n;k--){
      array[k+1]=array[k];

    }

    printf("\n");




    return 0;

}
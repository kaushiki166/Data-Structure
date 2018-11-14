#include "stdio.h"

int main(){
  int i,n,k,j,value,max,top=-1;
  int arr[20];
  printf("Enter no. of elements you want in your stack\n");\
  scanf("%d\n", &n);
  printf("1 - Insertion\n");
  printf("2 - deletion\n");
  scanf("%d\n", &k);
  switch (k) {
    case 1:
    for(i=0;i<max;i++){
      if(top==-1){
        top=0;
      }
      else{
        top++;
        printf("Enter the value\n");
        arr[top] = scanf("%d\n", &value);
      }
    }
    break;
    case 2:
    printf("Enter the no. of values you want to delete - \n");
    scanf("%d\n", &j);
    for(i=top;i=(top-j);i--){
      top = top-1;
    }
  }
    return 0;
}

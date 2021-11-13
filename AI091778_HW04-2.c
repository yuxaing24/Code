#include<stdio.h>
#include<stdlib.h>
int main(){
int i=0 ,c= 0,temp;
  printf("Input:");
  scanf("%d",&temp);
  while(i<temp){
    i++;
    c=1;
    while (c<=temp-i){
      printf(" ");
      c++;
    }
    c=1;
    while(c<=i*2-1){     
      printf("*");
      c++;
    }
    printf("\n");
    i++;
  }
  return 0;
}
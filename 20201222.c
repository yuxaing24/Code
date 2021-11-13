#include<stdio.h>
#include<stdlib.h>

int prime(int z){
    int i,sum; 
    for ( i = 1; i < z; i++){
            if (z%i==0){
                sum++;
            }
    }
    if(sum<=2){
        printf("0");
    }else{
        printf("1");
    }
    return z ;
}
int main(){
    int z ;
    printf("input V :");
    scanf("%d",&z);
     int f =prime(z);
    return EXIT_SUCCESS ;
}
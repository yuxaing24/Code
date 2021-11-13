#include<stdio.h>
#include<stdlib.h>
int main(){
    int n ;
    printf("How many:\n");
    scanf("%d",&n);
    float *student = (float*)malloc(sizeof(float)*n);
    int i;
    for(i=0;i<n;i++){
        printf("Enter KG:\n");
        scanf("%f",student+i);
    }
    printf("Have %d student",n);
    puts("");
    for ( i = 0; i < n; i++){
        printf("%.2f\n",*(student+i));
    }
    
    float Max=*(student);
    int j=0;
    for (i=1;i<n;i++){
        if (*(student+i)>Max){
            Max=*(student+i);
        }
    }
    for (i=0;i<n;i++){
        if (*(student+i)==Max){
            printf("Large is the %d studnt\n",i+1);
        }
    }

    float Min=*(student);

    for(i=0;i<n;i++){
        if(*(student+i)<Min){
            Min=*(student+i);
        }
    }
    for (i=0;i<n;i++){
        if (*(student+i)==Min){
            printf("Small is the %d studnt\n",i+1);
        }
    }

    float sum;
    for ( i = 0; i < n; i++){
        sum+=*(student+i);
    }
    printf("AVG=%.2f",sum/n);

    

    free(student);
}
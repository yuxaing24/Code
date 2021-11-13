#include<stdio.h>
#include<string.h>

int main(){
    char entstr[99];
    int i=0,count=0;
    gets(entstr);
    while (entstr[i]!='\0'){
        for(i=0;i<strlen(entstr);i++){
            if (entstr[i]==' '){
                count++;
                }
        }
    }
    printf("%d",count+1);  
}
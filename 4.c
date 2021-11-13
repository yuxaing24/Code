#include<stdio.h>
#include<string.h>

int main(void){
    char astr[99],c;
    gets(astr);
    int i ,j;
    j=strlen(astr) - 1;
    for(i=0; i<j; i++){
            c= astr[i];
            astr[i] = astr[j];
            astr[j] = c;
            j--;
        }
    printf("%s",astr);
}
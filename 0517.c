#include<stdio.h>
#include<stdlib.h>

typedef struct student{
    char id[10];
    char name[100];
    int prog;
}Student;

int main(){
    Student bob;
    printf("id=");
    scanf("%s",&bob.id);
    printf("Name=");
    scanf("%s",bob.name);
    printf("prog:");
    scanf("%d",&bob.prog);
    printf("%s %s %d ",bob.id,bob.name,bob.prog);
}
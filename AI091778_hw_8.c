#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct student{
    int id;
    int chi;
    int eng;
    int mat;
} Student ;

void getscore(Student* s,int size,int sid){
    puts("Chinese English Math");
    scanf("%d %d %d ",&((s+sid-1)->chi),&((s+sid-1)->eng),&((s+sid-1)->mat));
}

void score(Student* s,int size ,int sid,int subject){
    switch (subject){
    case 1:
        printf("change chi");
        scanf("%d",&(s+sid-1)->chi);
        break;
    
    case 2:
        printf("change eng");
        scanf("%d",&(s+sid-1)->eng);
        break;

    case 3:
        printf("change mat");
        scanf("%d",&(s+sid-1)->mat);
        break;
    }
}

void avg(Student* s ,int size){
    float cavg=0,eavg=0,mavg=0;
    for(int i=0;i<size;i++){
        cavg+=(s+i)->chi;
        eavg+=(s+i)->eng;
        mavg+=(s+i)->mat;
    }
    printf("chiavg:%.1f\nengavg:%.1f\nmatavg:%.1f\n",(float)cavg/size,(float)eavg/size,(float)mavg/size);

}


int main(){
    int num,chioce,sid,subject;
    printf("Student:");
    scanf("%d",&num);
    Student* ptr = (Student*)malloc(sizeof(Student)*num);
    for(int i=0;i<num;i++){
        (ptr+i)->id=i+1;
        (ptr+i)->chi=rand()%101;
        (ptr+i)->eng=rand()%101;
        (ptr+i)->mat=rand()%101;
    }
    while (1){
        puts("1.Print Score\n2.Change Score\n3.AVG\n4.Exit");
        scanf("%d",&chioce);
        switch (chioce){
        case 1:
            printf("Number:");
            scanf("%d",&sid);
            getscore(ptr,num,sid);
            break;
        
        case 2:
            printf("Number:");
            scanf("%d",&sid);
            printf("Subject1)chi2)eng3)mat:");
            scanf("%d",&subject);
            score(ptr,num,sid,subject);
            break;
        
        case 3:
            avg(ptr,num);
            system("pause");
            break;
        
        case 4:
            return 0;
        }
    system("psuse");
    system("cls");
    }

    free(ptr);
}

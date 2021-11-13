#include<stdio.h>
#include<stdlib.h>

typedef struct student {
    int id;
    char name[10]; 
    int chi;
    int eng;
    int mat;
} Student;

int main() {
    Student csie1b[5];// = {{0,"Bob",90}, {1,"Alice",100}};
    int i;
    for(i=0;i<5;i++) {
        scanf("%d %s %d %d %d", &(csie1b[i].id), csie1b[i].name, &(csie1b[i].chi),&(csie1b[i].eng),&(csie1b[i].mat));
    }
    int savg=0;
    int chiavg = 0;
    int eavg=0,mavg=0;
    for(i=0;i<5;i++) {
        savg+=csie1b[i].chi+csie1b[i].eng+csie1b[i].mat;
        chiavg += csie1b[i].chi;
        eavg+=csie1b[i].eng;
        mavg+=csie1b[i].mat;
        printf("%d %s %d %d %d\n", csie1b[i].id,csie1b[i].name,csie1b[i].chi,csie1b[i].eng,csie1b[i].mat);
    }   
    printf("SAVG %.2f\n", (float)savg/4);     
    printf("CAVG %.2f\n", (float)chiavg/5); 
    printf("EAVG %.2f\n", (float)eavg/5); 
    printf("MAVG %.2f\n", (float)mavg/5);
    return EXIT_SUCCESS;
} 

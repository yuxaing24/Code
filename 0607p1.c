// 文字檔讀取
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student {
    char name[10];
    int prog;
    int csie;
} Student;

int main() {
    Student csie1b[50];
    int size = 0;

    FILE* fp;
    fp = fopen("./myfile.txt","r"); // r模式，檔案必須存在
    if(fp == NULL) {
        printf("File Open Error!\n");
        return EXIT_FAILURE;
    }
    char buf[256];
    // 將文字檔的內容一行一行的印出來
    while(fgets(buf, 256, fp) != NULL) {// Bob,100,90\n 
        char* tok = strtok(buf, ","); // Bob
        strcpy(csie1b[size].name, tok);
        tok = strtok(NULL, ","); // 100
        csie1b[size].prog = atoi(tok);
        tok = strtok(NULL, ","); // 90
        csie1b[size].csie = atoi(tok);//atoi string->int
        size++;
    }
    fclose(fp);

    int i;
    for(i=0;i<size;i++) {
        printf("%s %d %d\n", 
            csie1b[i].name, csie1b[i].prog, csie1b[i].csie);
    }

    return EXIT_SUCCESS;
}

#include<stdio.h>
#include<stdlib.h>
typedef struct student{
    char ptrname;
    int ptrprog;
    int ptrcsie;
};
 
int main() {
	int n;
	scanf("%d", &n);
	char* ptrname = (char*)malloc(sizeof(char) * 10 * n);
	int* ptrprog = (int*)malloc(sizeof(int) * n);
	int* ptrcsie = (int*)malloc(sizeof(int) * n);
	int i;
	for(i=0;i<n;i++) {
		scanf("%s %d %d", ptrname+i*10, ptrprog+i, ptrcsie+i);
	}
	float progavg = 0;
	float csieavg = 0;
	for(i=0;i<n;i++) {
		progavg += *(ptrprog+i);
		csieavg += *(ptrcsie+i);
	} 
	progavg = progavg / n;
	csieavg = csieavg / n;
	float* studentavg = (float*)malloc(sizeof(float) * n);
	memset(studentavg, 0, sizeof(float) * n);
	for(i=0;i<n;i++) {
		*(studentavg+i) = (*(ptrprog+i) + *(ptrcsie+i)) / 2;
	}
	float avg = 0;
	for(i=0;i<n;i++) {
		avg += *(studentavg+i);
	}
	avg = avg / n;

	for(i=0;i<n;i++){
		printf("%s\t%3d %3d %3.0f\n",ptrname+i*10,*(ptrprog+i),*(ptrcsie+i),*(studentavg+i));
	}
	printf("\t%3.0f %3.0f %3.0f\n",progavg,csieavg,avg);
	free(ptrname);
	free(ptrcsie);
	free(ptrprog);
	free(studentavg);
	
	return EXIT_SUCCESS;	
}
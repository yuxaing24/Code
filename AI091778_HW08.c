#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int g(int r){
	srand(time(NULL));
	int v;
		for(v=0;v<1;v++){
		r=rand()%256;
	}
	return r;
}
int h(int c){
	srand(time(NULL));
	int v,r;
	for(v=0;v<1;v++){
		r=rand()%256;
	}
	int i=1,b=0;
	while(r>1){
		b+=(r%2)*i;
		r/=2;
		i=i*10;
	}
	return b;
}

int main(){
	int a,b;
	a=g(a);
	b=h(b);
	printf("%d>>%d\n",a,b);
	system("pause");
	return 0 ;
} 

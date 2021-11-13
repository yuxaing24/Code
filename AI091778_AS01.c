#include<stdio.h>

int main(void) {
	char pass[20];
	char c;
	int s,i;
	for ( i = 0; i <= 20; i++) {
		pass[i] = ' ';
	}
	i = 0;
printf("input");
while (i<20&&(c = getchar()) != '\n') {
	pass[i] = c;
	i++;
}
printf("N:");
scanf("%c", &s);

for (i = 0; i < 20; i++) {
	if (pass[i] > 'A'&&pass[i]<'Z' ) {
		pass[i] = (pass[i] + s-'A') % 26 + 'A';
	}
	if (pass[i] > 'a'&&pass[i] < 'z') {
		pass[i] = (pass[i] + s - 'a') % 26 + 'a';
	}
}

printf("output");
for (i = 0; i < 20; i++) {
	printf("%c", pass[i]);
}
return 0;
}
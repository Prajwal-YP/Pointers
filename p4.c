#include<stdio.h>

int main()
{
	char a[17]="yp prajwal";
	char *h;
	for(h=a;*h!='\0';h++)
		printf("%c",*h);
	return 0;
}

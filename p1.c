#include<stdio.h>

void main()
{
	int a=10;
	char b='1';
	float c=20.9;
	
	int *p1=&a;
	char *p2=&b;
	float *p3=&c;
	
	printf("\np1\t:\t%d",p1);
	printf("\n*p1\t:\t%d",*p1);
	printf("\np2\t:\t%d",p2);
	printf("\n*p2\t:\t%c",*p2);
	printf("\np3\t:\t%d",p3);
	printf("\n*p3\t:\t%f",*p3);
	
	printf("\n*(p1+1)\t:\t%d",*(p1+1));
	printf("\n*(p2+1)\t:\t%d",*(p2+1));
	printf("\n*(p3+1)\t:\t%d",*(p3+1));
}

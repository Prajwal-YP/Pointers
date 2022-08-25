#include<stdio.h>

main()
{
	int a=10;
	int*p;
	p=&a;
	int **q;
	q=&p;
	
	printf("%d\n\n",&a);
	
	printf("%d\n",q);
	printf("%d\n",*q);
	printf("%d\n",**q);
	
}

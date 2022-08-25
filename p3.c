#include<stdio.h>

void inc(int *a)
{
	printf("\nAddress in inc : %d",a);
	printf("\n*a - %d",*a);
	*a=*a+1;
	printf("\n*a - %d",*a);
	printf("\n*++a - %d",*(a+1));
	printf("\n*++a - %d",*++a);
	
}

int main()
{	

	int a=10;
	printf("Address in main : %d",&a);
	inc(&a);
	printf("\n%d",a);
	return 0;
}

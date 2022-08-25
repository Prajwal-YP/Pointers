#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int comp(void *a,void *b)
{
	int A=*((int*)a);
	int B=*((int*)b);
	return -A+B;
}

int main()
{
	int a[]={-33,98,89,-67,354};
	int i;
	qsort(a,5,sizeof(int),comp);
	
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
		
	return 0;
}

#include<stdio.h>

int main()
{
	int a[2][3]=	{
						{1,2,3},
						{4,5,6}
					},i,j;
//	int *p=a;
	int (*q)[3]=a;
	
	for(i=0;i<2;i++)
	for(j=0;j<3;j++)
	printf("%d ",*(*(q+i)+j));
//	printf("%d %d\n",*q,*(q+1));
//	printf("%d %d %d %d %d %d",*p,*(p+1),*(p+2),*(p+3),*(p+4),*(p+5));
	return 0;	

}

#include<stdio.h>

int main()
{
	int *p = (int*)malloc(3*sizeof(int));
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter %d element : ",i);
		scanf("%d",(p+i));
	}
		
	
	printf("\nAnswers : \n");
	
	for(i=0;i<3;i++)
		printf("\n\t\t%d - %d",p+i,p[i]);
	printf("\nDONE");
	
	int n;
	printf("\n\nEnter length of your name+1 : ");
	scanf("%d",&n);
	char *q=(char*)calloc(n,sizeof(char));
	
	printf("Entere the string : ");
	scanf("\n%[^\n]",q);
	
	printf("\n\n%s",q);
	free(q);
	printf("\nDONE\n");
	
	p=(int*)realloc(p,5*(sizeof(int)));
	for(i=3;i<5;i++)
	{
		printf("Enter %d element : ",i);
		scanf("%d",p+i);
	}
	
	for(i=0;i<5;i++)
		printf("\n\t\t%d - %d",p+i,p[i]);
	
	free(p);
	
	printf("\n\nDone");
	return 0;
}

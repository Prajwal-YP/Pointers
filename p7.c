#include<stdio.h>

void greet(void (*f)(char*))
{
	char s[]="Prajwal Y P";
	printf("Hello ");
	f(s);
}

void prn(char *name)
{
	printf("%s",name);
}

int main()
{
	greet(prn);
	return 0;
}

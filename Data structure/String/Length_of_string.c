#include<stdio.h>
int main()
{
	char a[10];
	printf("enter the string\n");
	gets(a);
	puts(a);
	int i;
	i=0;
 while(a[i]!='\0')
{

i++;
}
	printf("the length of string %d",i);
return 0;	
}

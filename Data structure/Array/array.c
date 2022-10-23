#include<stdio.h>
int main()
{
	int i,n,a[100],s,flag=0;
	printf("enter the size \n");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	printf("%d",a[i]);
	}	
	
	printf("enter the element you want to find");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		flag=1;
		else flag=0;
	
	}	if(flag==1)
		printf("element found at%d",i);
		
		else
		printf("not found");
	}

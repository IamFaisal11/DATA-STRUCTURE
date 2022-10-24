#include<iostream>
using namespace std;
int main()
{
	int i,n,a[100],s,flag=0;
cout<<"enter the size \n";
	cin>>n;
	cout<<"enter the elements";
	for(i=0;i<n;i++)
{
   cin>>a[i];
}
for(i=0;i<n;i++)
{
	cout<<a[i];
	}	
	
cout<<"enter the element you want to find";
cin>>s;
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
	{	flag=1;
		}
		else 
		flag=0;
}
		if(flag==1)
	cout<<"element found "<<i;
		
		else
	cout<<"not found";
	
	}

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
int start=0,end=n;
int mid;
	for(i=0;i<n;i++)
{
	mid=(start+end)/2;
	if(a[mid]=s)
	flag=1;
	else if(a[mid]>s){
		start=mid-1;
	}
	else if(a[mid]<s)
	{
		end=mid-1;
	}
	flag=0;
	
}
if(flag==1)
cout<<"element found";
else
cout<<"element not found";
}

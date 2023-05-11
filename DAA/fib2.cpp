#include<iostream>
using namespace std;

int main()
{
	int n,a[100];
	a[0]=0;
	a[1]=1;
	a[2]=1;
	cout<<"enter the terms";
	cin>>n;
	for(int i=3;i<n;i++)
{
	a[i]=a[i-1]+a[i-2];
	
}
	for(int i=0;i<n;i++)
{

	cout<<a[i];
}

}

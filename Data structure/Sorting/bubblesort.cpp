#include<iostream>
using namespace std;
void bsort(int a[],int n)
{int temp;
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{ 
		if(a[i]>a[i+1])
	 {temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
		
	 }
	} 
	}
	}
	int main()
{
	int a[100],n,i;
	cout<<"Enter the size of array";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"array before sorting";
	for(i=0;i<n;i++)
	{
cout<<a[i];
	} 
	bsort(a,n);
		cout<<"array after sorting";
	for(i=0;i<n;i++)
	{
cout<<a[i];
	} 
		}

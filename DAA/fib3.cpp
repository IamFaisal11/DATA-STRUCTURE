#include<iostream>
using namespace std;
int fib(int n)
{ int a[100];
a[0]=0;
a[1]=1;
for(int i=2;i<n;i++)
{
	a[i]=a[i-1]+a[i-2];
}
return a[n];	
}
int main()
{
	int n;
	cout<<"enter the number of terms";
	cin>>n;
	fib(n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}

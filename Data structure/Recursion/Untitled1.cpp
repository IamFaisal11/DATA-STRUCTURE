#include<iostream>
using namespace std;
int main()
{ 
char a[10]="hello";
	cout<<a;
	for(int i=0;i<5;i++)
	{
		int x=a[i]-32;
		a[i]=(char)x;
	}
	cout<<a;
}

#include<iostream>
using namespace std;
int main()
{ 
char a[100];
int ch;
cout<<"Enter your string"<<endl;
	for(int i=0;i<5;i++)
	{
	cin.getline(a,100);
	}
	cout<<a<<endl;
	cout<<"1 for uppercase 2 for lowercase";
	cin>>ch;
	if(ch==1)
	for(int i=0;i<5;i++)
	{
		int x=a[i]-32;
		a[i]=(char)x;
	}
	if(ch==2)
		for(int i=0;i<5;i++)
	{
		int x=a[i]+32;
		a[i]=(char)x;
	}
	cout<<a;
}

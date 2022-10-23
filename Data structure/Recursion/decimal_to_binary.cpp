#include<iostream>
using namespace std;
void dtob(int x)
{
	if(x==0)
	cout<<"0";
	else if(x==1)
	cout<<"1";
	else{
	
	cout<<(x%2);
	dtob(x/2);
}
}
int main()
{
	int n;
	cout<<"Enter the number";
	cin>>n;
	dtob(n);
}


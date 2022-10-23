#include<iostream>
using namespace std;
int dtoh(int n)
{
	if(n==0)
return 0;
dtoh(n/16);
int rem=(n%16);
	if(rem>9)
	cout<<char(55+rem);
	else cout<<rem;
}
int main()
{
 int n; 
 cout<<"Enter the number";
 cin>>n;
 dtoh(n);
}

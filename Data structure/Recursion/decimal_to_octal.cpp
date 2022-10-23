#include<iostream>
using namespace std;
int dtoh(int n)
{
	if(n==0)
return 0;
dtoh(n/8);
 cout<<(n%8);


}
int main()
{
 int n; 
 cout<<"Enter the number";
 cin>>n;
 dtoh(n);
}

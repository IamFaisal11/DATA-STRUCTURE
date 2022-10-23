#include<iostream>
using namespace std;
int pow(int,int);
int main()
{
	int b,n;
	cout<<"Enter the base and the power";
	cin>>b>>n;
	long int ans=pow(b,n);
cout<<ans;	
}
int pow(int a,int b){

if(b==0)
return 1;
else if(b==1)
return a;
else
return (a*pow(a,b-1));


}

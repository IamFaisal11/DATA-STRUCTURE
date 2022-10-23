#include<iostream>
using namespace std;
 int fib(int n){
 	if(n==0)
 	return 0;
	 else if(n==1)
 	return 1;
 	else 
return fib(n-1)+fib(n-2);
}

 
 int main()
 {
 	int n,i;
 	cout<<"Enter the nth term elements";
 	cin>>n;
	 
	 for(int i=0; i<n;i++)
	 cout<<fib(i);
	 cout<<endl;

	 
 }
 

#include<iostream>
using namespace std;
int toh(int n, char beg, char mid,char end)
{
	if(n==1)
	cout<<beg<<"->"<<end<<endl;
	else{
		 toh(n-1,beg,end,mid);
		cout<<beg<<"->"<<end<<endl;
	 toh(n-1,mid,beg,end);
	}
}
int main()
{
	int n=4;
	toh(n,'a','b','c');
	
	
}

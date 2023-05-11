#include<iostream>
using namespace std;
int bs(int a[],int e,int start,int end)
{
	if(end>=start)
	{  int mid=(start+end)/2;
	if(a[mid]==e)
		return mid;
	  else if(a[mid]>e)
		{
			return bs(a,e,start,mid-1);
		}
		else
		return bs(a,e,mid+1,end);
	}
	return 0;
}
int main()
{
	int a[]={3,5,1,7,4,2},result,e;
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"enter the element you want to find";
	cin>>e;
	result=bs(a,e,0,n-1);
	if(result==0)
	cout<<"element found";
	else
	cout<<"not found";
	
}

#include<iostream>
using namespace std;
int knapsack(int w[],int val[],int c,int n)
{
	int bag[n],p;

if(c!=0)
{
  for(int i=0;i<n;i++)
  {
  	if(c>=w[i])
  	{
  			bag[i]=1;
  		c=c-w[i];
  	    p+=bag[i]*val[i];
	  }
	else
	{
	 bag[i]=c/w[i];
	 c=c-w[i];
	 p+=bag[i]*val[i];
	}
  }
  cout<<p;
}

}
int main()
{
	int w[]={3,1,6,2},val[]={40,15,60,50};
	int c=10,n;
	n=sizeof(w)/sizeof(w[0]);
	knapsack(w,val,c,n);
}

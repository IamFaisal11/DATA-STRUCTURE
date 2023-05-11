#include<iostream>
using namespace std;
int max(int x,int y)
{
	return (x>y)?x:y;
}
int knapsack(int c,int w[],int p[],int n)
{
	if(n==0||c==0)
	    return 0;
	
    if(w[n-1]>c)
	   return knapsack(c,w,p,n-1);
	
	else 
	    return max(p[n-1]
		+knapsack(c-w[n-1],w,p,c-1),
		knapsack(c,w,p,n-1));
}
int main()
{
	int w[]={1,4,2,6};
	int p[]={10,50,15,70};
	int c=8;
	int n=sizeof(w)/sizeof(w[0]);
	knapsack(c,w,p,n);
}

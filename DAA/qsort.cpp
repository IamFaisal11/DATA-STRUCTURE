#include<iostream>
using namespace std;

int partition(int a[],int start,int end)
{
	int pivot=a[start];
	int i=start+1;
	int j=end;
	int temp;
while(i<j)
	{

	while(a[i]<a[pivot]){
		i++;
	}
	while(a[j]>a[pivot]){
		j--;
	}
	if(i<j)
	{
     temp=a[i];
	a[i]=a[j];
	a[j]=temp;
    }	
	}
   temp=a[pivot];
    a[pivot]=a[j];
    a[j]=temp;
    
}int qsort(int a[],int start,int end)
{int p;
       	if(start<end){
		p=partition(a,start,end);
		qsort(a,start,p-1);
		qsort(a,p+1,end);
	}
}
int main(){
	int a[]={5,1,7,4,2,9},i;
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	qsort(a,0,n-1);
	while(i!=n)
	{
		cout<<a[i];
		i++;
	}
}

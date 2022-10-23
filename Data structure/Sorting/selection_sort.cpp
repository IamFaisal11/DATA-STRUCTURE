#include<iostream>
using namespace std;
void ssort(int a[],int n)
{
   int temp;
   for(int i=0;i<n-1;i++)
   {
          int big=i;
            for(int j=i+1;i<n;j++)
            {
      	      if(a[j]<a[big])
      	      {
      	             	big=j;
		  }
	  }
	    temp=a[i];
	    a[i]=a[big];
	    a[big]=temp;
	   }
      
} 
int main()
	{
	
	 int a[100], n;
    cout<< "Enter the Size of Array : ";
    cin>> n;

    cout << "Enter the Elements of Array : ";
    for(int i = 0; i < n; i++)
        cin>> a[i];

    ssort(a, n);
    for(int i = 0; i < n; i++)
        cout<< a[i] << " ";

    return 0;}
//	int main()
//{
//	int a[100],n,i;
//	cout<<"Enter the size of array";
//	cin>>n;
//	for(i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
//	cout<<"array before sorting";
//	for(i=0;i<n;i++)
//	{
//cout<<a[i];
//	} 
//ssort(a,n);
//		cout<<"array after sorting";
//	for(i=0;i<n;i++)
//	{
//cout<<a[i];
//	} 
//		}

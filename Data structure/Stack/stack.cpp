#include<iostream>
using namespace std;
#define max 100
int a[max];
int top=-1;
void push(int item){
	if(top==max-1)
 cout<<"over flow";
 else {
 ++top;
 a[top]=item;}
}
int pop()
{
	if(top==-1)
	{
		return -1;
	}
	else return a[top--];
}
void view()
{	if(top==-1)
	cout<<"stack is empty";
	else
{
	int i=0;

	while(i<=top)
	{
		cout<<a[i];
		i++;
	}}
}
int main()
{int item;
int ch;
while(1)
{
	cout<<"enter 1 for push 2 for pop 3 view";
	cin>>ch;
	if(ch==1)
	{
		cout<<"enter item";
		cin>>item;
		push(item);
	}
	
	else if(ch==2){
	
	    item=pop();
	   if(item==-1)
	      {
        cout<<"underflow";
 
	        }
	       else cout<<item;
	        } 
			 
else if (ch==3)
view();
	else if(ch==4)
	break;
}

}

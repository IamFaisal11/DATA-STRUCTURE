#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{ int data;
struct node *next;
};struct node *top=NULL;
void push(int item){
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=item;
	temp->next=NULL;
	if(top==NULL)
	top=temp;
	else
	{
		top->next=temp;
		temp=top;
	}
	
}
/*int pop()
{
	if(top==-1)
	{
		return -1;
	}
	else return a[top--];
}*/
void view()
{	struct node *trav;
if(top==NULL)
cout<<"stack is empty";
else{
	trav=top;
	while(trav!=NULL)
	{
		cout<<trav->data;
		trav=trav->next;
	}
	}
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
	
/*	else if(ch==2){
	
	    item=pop();
	   if(item==-1)
	      {
        cout<<"underflow";
 
	        }
	       else cout<<item;
	        } */
			 
else if (ch==3)
view();
	else if(ch==4)
	break;
}

}

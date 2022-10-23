#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node *next;
}; struct node *head=NULL, *tail=NULL;
void create(){
	struct node *temp;
	int n,i;
	cout<<"Enter the number of nodes";
	cin>>n;
	for(i=0;i<n;i++)
	{
		temp=(struct node*)malloc(sizeof(struct node));
	cout<<"enter the element";
	
		
		cin>>temp->data;
		temp->next=NULL;
		
			if(head==NULL)
		    {
					head=temp;
			  tail=temp;
		}
		    else{
			tail->next=temp;
			tail=temp;
			
		}
		
	}
}
void view()
{
    struct node *trav=NULL;

    trav = head;

    while(trav != NULL)
    {
        cout << trav -> data << endl;
        trav = trav -> next;
    }
}
void insert(){
	int value;
	struct node * temp,*trav=NULL;
	temp=(struct node*)malloc(sizeof(struct node));
	cout<<"enter value";
	cin>>temp->data;
	temp->next=NULL;
	cout<<"ent er the node after which you want to delete the node";
	cin>>value;
	cout<<"Enter 1 for before 2 for after";

trav=head;
while(trav->data!=value)
{
	trav=trav->next;
}
temp->next=trav->next;
trav->next=temp;
}
void deletion()
{
	struct node *temp,*trav=NULL;
	int n;
cout<<"Enter the node you want to delete";
cin>>n;
if(head->data==n)
{
temp=head;
head->next=head;
free(temp);
}
else{
	trav=head;
	while(trav->next->data!=n)
	{trav=trav->next;
	temp=trav->next;
	}
	if(trav->next==tail)
	{
		trav->next=NULL;
		free(temp);
}
else
{
	trav->next=trav->next->next;
	free(temp);
}
	
	
	
}


}



int main()
{
	int ch;
	while(1)
	{
		cout<<"enter 1 for create 2 for view 3 for exit";
		cin>>ch;
		if(ch==1)
		create();
		else if(ch==2)
	view();
		if(ch==3)
		break;
		if(ch==4)
		insert();
		if(ch==5)
		deletion();
	}
}

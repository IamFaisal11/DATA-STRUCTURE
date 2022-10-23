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
			tail->next=head;
			
		}
		
	}
}
void view()
{
    struct node *trav=NULL;

    trav = head;

    while(1)
    {
        cout << trav -> data << endl;
        if(trav==tail)
        break;
      else  trav = trav -> next;
    
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
	}
}

#include<iostream>
#include<stdlib.h>
using namespace std;

 struct node {
    int data;
    struct node *Left, *Right; 
}; struct node *Root = NULL, *temp, *Trav;



void Create()
{
    int n;
    cout << "Enter the Number of Nodes : ";
    cin >> n;

    for(int i = 0; i <n; i++)
    { struct node* temp;
        temp = (struct node *)malloc(sizeof(struct node));

        cout << "Enter the Elements : ";
        cin >> temp -> data;

        temp -> Left = temp -> Right = NULL;

        if(Root == NULL)
            Root = temp;
        else{
            Trav = Root;
            while (1)
            {
                if(temp -> data < Trav -> data)
                {
                    if(Trav -> Left == NULL) {
                        Trav -> Left = temp;
                        break;
                    }
                    else
                        Trav = Trav -> Left;
                }
                else if(temp -> data > Trav -> data)
                {
                    if(Trav -> Right == NULL) {
                        Trav -> Right = temp;
                        break;
                    }
                    else
                        Trav = Trav -> Right;
                }
                else
                   break;
            }
            
        }
    }
}

void Pre_Order(node *Root)
{
    if(Root != NULL)
    {
        cout << Root -> data << " ";
        Pre_Order(Root -> Left);
        Pre_Order(Root -> Right);
    }
}

void In_Order(node *Root)
{
    if(Root != NULL)
    {
        In_Order(Root -> Left);
        cout << Root -> data << " ";
        In_Order(Root -> Right);
    }
}

void Post_Order(node *Root)
{
    if(Root != NULL)
    {
        Post_Order(Root -> Left);
        Post_Order(Root -> Right);
        cout << Root -> data << " ";
    }
}
void Even(node *Root)
{
    if(Root != NULL)
    {
        Even(Root ->Left);
        if(Root -> data % 2 == 0)
            cout << Root -> data << " ";
        Even(Root -> Right);
    }
    
}

void Odd_Nodes(node *Root)
{
    if(Root != NULL)
    {
        Odd_Nodes(Root -> Left);
        if(Root ->data % 2 != 0)
            cout << Root ->data << " ";
        Odd_Nodes(Root ->Right);
    }
}
void Mirror_BST(node *Root)
{
    if(Root != NULL)
    {
        Mirror_BST(Root ->Left);
        Mirror_BST(Root -> Right);

      

        temp = Root ->Left;
        Root ->Left = Root -> Right;
        Root -> Right = temp;
    }
}



int main()
{
    int ch;
    while (1)
    {
        cout << "1 for Create 2 for Pre-Order 3 for In-Order 4 for Post-Order 5 for even 6 for odd 7 for mirror 8 for Exit\nEnter your Choice : ";
        cin >> ch; 
        if(ch == 1)
            Create();
        else if(ch == 2)
            Pre_Order(Root);
        else if(ch == 3)
            In_Order(Root);
        else if(ch == 4)
            Post_Order(Root);
      
   else if(ch==5)
   {
	 Even(Root);
    cout << "Even Nodes in BST : ";
} 
else if(ch==6)
    {
	Odd_Nodes(Root);
cout << "Odd Nodes in BST : ";
} 
else if(ch==7) 
{  Mirror_BST(Root);
    cout << "\nMirror of In-Order = ";
    In_Order(Root);

 } else if(ch==7)
       exit;
    }
    return 0; 
}

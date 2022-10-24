#include<iostream>
#include<stdlib.h>
using namespace std;

struct node {
    int Data;
    struct node *next;
};struct node *Front = NULL, *Rear = NULL;



void Enqueue(int item)
{
    struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
    temp -> Data = item;
    temp -> next = NULL;
    
    if(Rear == NULL && Front == NULL)
    {
        Front = temp;
        Rear = temp;
        Rear -> next = Front;
    }
    else{
        Rear -> next = temp;
        Rear = temp;
        Rear -> next = Front;
    }

}

int Dequeue()
{
   struct node *temp;
    if(Front == NULL)
        return -1;
    else{
        int item = Front -> Data;
        temp = Front;
        Front = Front -> next;
        free(temp);
        return item;
    }
}

void View()
{
    struct node *Trav = Front;
    if(Front == NULL)
        cout << "Queue is Empty" << endl;
    else {
        while (Trav != NULL)
        {
            cout << Trav -> Data;
            Trav = Trav -> next;
        }
        
    }
}

int main()
{
    int ch, item;

    while (1)
    {
        cout << "\n1 for EnQueue\n2 for DeQueue\n3 for View\n4 for Exit\nEnter your Choice : ";
        cin >> ch;

        if(ch == 1)
        {
            cout << "Enter the item : ";
            cin >> item;
            Enqueue(item);
        }
        else if(ch == 2)
        {
            item = Dequeue();
            if(item == -1)
                cout << "UnderFlow" << endl;
            else
                cout << item;
        }
        else if(ch == 3)
            View();
        else if(ch == 4)
            break;
    }
    
}

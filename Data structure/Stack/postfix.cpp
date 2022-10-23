#include<iostream>
using namespace std;
#define max 100
int stack[max];
int top=-1;
char expr[100]="235*+";void 
push(int item){
	if(top==max-1)
 cout<<"over flow";
 else {
 ++top;
 stack[top]=item;}
}
int pop()
{
	if(top==-1)
	{
		return -1;
	}
	else return stack[top--];
}

int isoperator(char x)
{
if(x=='+'||x=='-'||x=='*'||x=='/'||x=='%')
	return 1;
	else
	return 0;
}
int evaluate(int a,int b,char opr)
{
	if(opr=='+')
	return b+a;
		if(opr=='-')
		return b-a;
				if(opr=='*')
				return b*a;
					if(opr=='/')
					return b/a;
						if(opr=='%')
						return b%a;
}
int main(){
	int i=0;
	while(expr[i]!='\0'){
		if(!isoperator(expr[i]))
		{
		push(expr[i]-48);	
		}
		else
		{
			int a=pop();
			int b=pop();
			int r=evaluate(a,b,expr[i]);
			push(r);
			
		}i++;
		
	}cout<<"result is"<<pop();
}


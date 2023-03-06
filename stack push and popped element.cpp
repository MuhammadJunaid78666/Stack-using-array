#include<iostream>
using namespace std; 
int stack[100],n=5,top=-1,arry[5],count=0,i;
void push(int val)
{
	if (top>=n-1)
	cout<<" Stack Overflow "<<endl;
	else
	{
		top++;
		stack[top]=val;
	}
}
void pop()
	{
		if(top<=-1)
		cout<<" Stack Underflow "<<endl;
		else
		{
			cout<<" The popped element is "<<stack[top]<<endl;
			
			while(i<n)
			{
				arry[i]=stack[top];
				i++;
				break;
			}
			top--;
			count++;
		}
	}
	void popped()
	{
		cout<<"the poped element are"<<endl;
		for(int i=0;i<count;i++)
		{
			cout<<arry[i]<<endl;
		}
	}
	void even()
	{
			cout<<"\n even number are"<<endl;
	for(int i=0;i<5;i++)
	{
		if(stack[i]%2==0)
		{
			cout<<stack[i]<<endl;
		}
	}
	}
	void isempty()
	{
		if(top<=-1)
		{
			cout<<"stack is full empty"<<endl;
		}
	}
	void isfull()
	{
		if(top>=n-1)
		{
			cout<<"stack is full"<<endl;
		}
		else
		cout<<"stack is not full"<<endl;
	}
	
 void display()
 {
 	if(top>=0)
 	{
 	 cout<<" Stack elements are";
	 for(int i=top;i>=0;i--)
	 cout<<stack[i]<<" ";
	 cout<<endl;	
	}
	else
	cout<<" Stack is empty";
 }
 int main()
 {
 	int ch,val;
 	cout<<" 1) push in stack"<<endl;
 	cout<<" 2)pop from stack"<<endl;
 	cout<<" 3)Display stack"<<endl;
 	cout<<" 4)even number are"<<endl;
 	cout<<" 5)stack is full empty"<<endl;
 	cout<<" 6)stack is full no more space"<<endl;
 	cout<<" 7)popped element "<<endl;
 	cout<<" 8)exist"<<endl;
 	do
	{
 		cout<<"Enter choice:"<<endl;
 		cin>>ch;
 		 switch(ch)
		{
 		 	case 1:
			{
				cout<<" Enter value to be pushed;"<<endl;
				cin>>val;
				push(val);
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:{
				even();
				break;
			}
			case 5:{
				isempty();
				break;
			}
			case 6:{
				isfull();
				break;
			}
			case 7:{
				popped();
				break;
			}
			case 8:
			{
				cout<<" Exit "<<endl;
			    break;
			}
			default:
			{
				cout<<" Invalid Choise"<<endl;	
			}
		}
	} while(ch!=8);
	return 0;
 }

#include<stdio.h>
#include<conio.h>
#define CAPACITY 100
char stack[CAPACITY],top=-1;
int isfull()
{
	if(top==CAPACITY-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isempty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push(int ele)
{
	if(isfull())
	{
		printf("\n stack is overflow");
	}
	else
	{
		top++;
		stack[top]=ele;
	}
}
int pop()
{
	if(isempty())
	{
		printf("\n stack is underflow");
	}
	else
	{
		return stack[top--];
	}
return 1;
}

void traverse()
{
int i;
	if(isempty())
	{
		printf("\n the stack is underflow");
	}
	else
	{
		printf("\n the stack elements are \t:");
		for(i=0;i<=top;i++)
		{
		printf("%c",stack[i]);
		}
	}
}

void peek()
{
	if(isempty())
	{
		printf("\n stack is underflow");
	}
	else
	{
		printf("\n the top element is %d",stack[top]);
	}
}
void reverse()
{
int i;
	printf("\nthe reverse is is \n");
		for(i=top;i>=0;i--)
			printf("%c",stack[i]);
}
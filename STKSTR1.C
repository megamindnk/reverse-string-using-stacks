#include<stdio.h>
#include<conio.h>
#include "STACK.c"
void main()
{
char array[100];
int i=0,data,item;
clrscr();
printf("string elements end with $\n");
gets(array);
	do
	{
		push(array[i]);
		i++;
	}while(array[i]!='\0');
	printf("\nyou entered stack\n");
	traverse();
       reverse();
getch();
}

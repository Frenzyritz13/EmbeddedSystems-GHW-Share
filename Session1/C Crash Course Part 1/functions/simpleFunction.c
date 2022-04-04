#include <stdio.h>
int add(int a, int b);	//function declaration
int main()
{
	int a=10,b=20;
	int c=add(10,20); 	//function call
	printf("Addition:%d\n",c);
	getch();
}
int add(int a,int b)	//function body
{
	int c;
	c=a+b;
	return c;
}
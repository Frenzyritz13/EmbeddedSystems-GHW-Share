#include <stdio.h>
inline int add(int a, int b)		//inline function declaration
{
	return(a+b);
}
int main()
{
	int c=add(10,20);
	printf("Addition:%d\n",c);
	getch();
}
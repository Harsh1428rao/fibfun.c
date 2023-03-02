#include<stdio.h>
int fib(int);
int main()
{
	int n,c,i=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		c=fib(i);
		printf("Fibonacci Series of N number is %d\n",c);
	}
}
int fib(int a)
{
	int b;
	if (a==1||a==0)
	{
		return a;
	}
	else
	{
		b=fib(a-1)+fib(a-2);
		return b;
	}
	return 0;
}


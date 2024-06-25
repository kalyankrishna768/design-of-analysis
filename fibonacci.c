#include<stdio.h>
int main()
{
	int a=0,b=1,c,i,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
}

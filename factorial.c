#include<stdio.h>
int fact(int n)
{
	if(n==1)
	return 1;
	else
	return(n*fact(n-1));
}
int main()
{
	int n,factorial;
	printf("Enter any number: ");
	scanf("%d",&n);
	factorial=fact(n);
	printf("Factorial of %d = %d",n,factorial);
return 0;
}

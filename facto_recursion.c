#include <stdio.h>
int factorial(int);
int main(void) 
{
	int n;
	float f;
	printf("Enter a integer:\n");
	scanf("%d",&n);
	if(n<0)
	 printf("factorial of negative integer does ");
	else
	{
	   f=factorial(n);
	   printf("%d! = %d",n,f);
	}
	return 0;
}

int  factorial(int n)
{
    if(n==0)
     return 1;
    else
     return(n*factorial(n-1));
     
}

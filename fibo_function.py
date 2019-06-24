#include <stdio.h>
void fib(int n);
int main(void) 
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    fib(n);
	return 0;
}

void fib(int n)
{
    int a=0,b=1,c,i;
    printf("%d\n%d\n",a,b);
    for(i=1;i<=n-2;i++)
    {
     c=a+b;
     printf("%d",c);
     a=b;
     b=c;
    } 
}

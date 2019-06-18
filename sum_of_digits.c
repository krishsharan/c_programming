#include <stdio.h>
int main(void) 
{
	int num,sum=0,digit;
	printf("Enter a num\n");
	scanf("%d",&num);
	while(num>0)
	{
	digit=num%10;
	sum+=digit;
	num/=10;
	}
	printf("\nsum of digit:%d",sum);
	return 0;
}


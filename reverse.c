#include <stdio.h>
int main(void) 
{
	int num,rev=0,rem;
	printf("Enter a num\n");
	scanf("%d",&num);
	while(num!=0)
	{
	 rem=num%10;
	 rev=(rev*10)+rem;
	 num/=10;
	}
	printf("sum of digit:%d",rev);
	return 0;
}

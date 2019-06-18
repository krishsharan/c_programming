#include <stdio.h>

int main(void) 
{
	int num,temp,small=10;
	printf("Enter a num\n");
	scanf("%d",&num);
	while(num>0)
	{
	  temp=num%10;
	  if(temp<small)
	  {
	   small=temp;    
	  }
	 num/=10; 
	}
	printf("\tsmallest digit:%d",small);
	return 0;
}

#include <stdio.h>
int main(void) {
	int i,n;
	int facto=1;
	printf("Enter the num:\n");
	scanf("%d",&n);
	if(n<0)
	{
	    printf("Error in the input\n");
	}
    else
	{
	 for(i=1;i<=n;i++)
	 {
	    facto=facto*i;
	 }
	 printf("%d",facto);
	}
	return 0;
}

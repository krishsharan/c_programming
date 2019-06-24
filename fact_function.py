#include <stdio.h>
int facto(int);
int main(void) 
{
    int n,fact=1;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("%d!=%d\n",n,facto(n));
	return 0;
}

int facto(int n)
{
    int i;
    int result=1;
    for(i=1;i<=n;i++)
     result=result*i;
    return (result); 
}

#include <stdio.h>
int main(void) 
{
 int n,i,flag=0;
 printf("Enter the num:\n");
 scanf("%d",&n);
 for(i=2;i<=n/2;++i)
 { 
   if(n%i==0)
    {
     flag=1;
     break;
    }
 }
 if(n==1)
 {
    printf("i is neither composite nor prime\n")
 }
 else
 {
    if(flag==0)
    {
     printf("%d is a prime\n",n);
    }
    else
    {
     printf("%d is not a prime\n",n)
    } 
 }
 return 0;
}

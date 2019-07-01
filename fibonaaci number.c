#include<stdio.h>
int main()
{
 //fill your code
 int a=0,b=1,sum=0,flag=0,n,i;
 scanf("%d",&n);
  for(i=1;(a+b)<=n;i++)
   {
     sum=a+b;
     if(sum==n)
     {
       flag=1;
       break;
     }
    else
    {
       a=b;
       b=sum;
     }
   }
   if(flag==1)
   {
     printf("Fibonacci Number");
   }
   else
   {
     printf("Not Fibonacci Number");
   }
 
 return 0;
}

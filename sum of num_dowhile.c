#include<stdio.h>
int main()
{
 int n,sum=0;
 do
 {
  scanf("%d",&n);
  sum+=n;
 }
 while(n!=-1);
  sum+=1; 
 printf("%d",sum);
 return 0;
} 

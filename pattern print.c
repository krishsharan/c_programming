#include <stdio.h>
int main(void) 
{
 int n,a,b;
 printf("Enter the num:\n");
 scanf("%d",&n);
 for(a=1;a<=n;a++)
 { 
  for(b=1;b<=a;b++)
   {
     printf("*");
   }
    printf("\n");
 }  
 return 0;
}

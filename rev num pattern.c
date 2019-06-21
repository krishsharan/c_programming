#include <stdio.h>
int main(void) 
{
 int n,a,b;
 printf("Enter the num:\n");
 scanf("%d",&n);
 for(a=n;a>=1;--a)
 { 
  for(b=1;b<=a;++b)
   {
     printf("%d",b);
   }
    printf("\n");
 }  
 return 0;
}

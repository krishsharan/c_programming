#include <stdio.h>
int main(void) 
{
 int num,sum=0,rem,temp;
 printf("Enter a num\n");
 scanf("%d",&num);
 temp=num;
 while(num!=0)
 {
  rem=num%10;
  sum=sum+(rem*rem*rem);
  num/=10;
 }
  if(temp!=sum)
  {
   printf("%d is a not an armstrong",temp);
  }
  else
  {
    printf("%d is an armstrong",temp); 
   }  
 return 0;
}

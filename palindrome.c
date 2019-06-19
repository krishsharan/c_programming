#include <stdio.h>
int main(void) 
{
 int num,rev=0,rem,temp;
 printf("Enter a num\n");
 scanf("%d",&num);
 temp=num;
 while(num!=0)
 {
  rem=num%10;
  rev=(rev*10)+rem;
  num/=10;
 }
  if(temp!=rev)
  {
   printf("%d is a not palindrome",temp);
  }
  else
  {
    printf("%d is  a palindrome",temp); 
   }  
 return 0;
}

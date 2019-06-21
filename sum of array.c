#include <stdio.h>
int main(void) 
{
 int arr[10],i,sum=0;
 for(i=0;i<10;i++)
 {
  scanf("%d",&arr[i]);   
 }
 printf("Sum of elements are:\n");
 for(i=0;i<10;i++)
 {
   sum+=arr[i];   
 } 
 printf("%d",sum);
 return 0;
}

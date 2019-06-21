#include <stdio.h>
int main(void) 
{
 int arr[10],i,sum=0;
 for(i=0;i<10;i++)
 {
  scanf("%d",&arr[i]);   
 }
 printf("Sum of elements are:\n");
 for(i=10;i>0;i--)
 {
    printf("%d",arr[i]);
 } 
return 0;
}

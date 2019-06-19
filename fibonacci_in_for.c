 #include <stdio.h>
int main(void) 
{
 int n,first=0,sec=1,next,i;
 printf("Enter a num\n");
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 { 
   next=first+sec;
   first=sec;
   sec=next;
    printf("%d",next);
 }
return 0;
}

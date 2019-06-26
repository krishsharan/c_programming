#include <stdio.h>

int main(void) 
{ 
    char a[50];
    int alpha=0,digit=0,other=0,i;
    printf("Enter the string:\n");
    gets(a);
    while(a[i]!='\0')
    {
      if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
      { 
        alpha++;
      }
      else if(a[i]>='0'&&a[i]<='9')
      {
       digit++;      
      }
      else
      {
        other++;      
      }
     i++; 
    }
    
	printf("Alpahabets=%d\n",alpha);
	printf("Digits=%d\n",digit);
	printf("Space=%d\n",other);
	return 0;
}

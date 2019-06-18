#include <stdio.h>

void main() {
      int days,year,weeks;
      printf("enter the days\n");
      scanf("%d",&days);
      year=days/365;
      weeks=(days%365)/7;
      days=days-((year*365)+(weeks*7));
      printf("days=%d,year=%d,weeks=%d",days,year,weeks);
	
	
}

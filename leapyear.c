#include<stdio.h>
#include<math.h>
int main()
{
	int year;
	printf("year:\n",year);
	scanf("%d",&year);
	
	if(year%400==0 || year%100!=0 && year/4==0)
	
	{
		printf("leap year\n");
	}
	else 
	{
		printf("not leap year");
	 } 
	 return 0;
	
	
}

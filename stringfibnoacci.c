#include<stdio.h>
#include<string.h>
int main()
{
	char x[50];
	char y[50]="a";
	char z[50]="b";
	int i;
	for(i=1;i<=5;i++)
	{
		printf("%s",z);
		x[i]=strcpy(z,y);
		strcat(x,z);
		strcpy(x,z);
		
		
		
	}
	 return 0;
}

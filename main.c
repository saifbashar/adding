#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	scanf("%s",a);
	scanf("%s",b);
	printf("%s %s",a,b);
	if(strcmp(a,b) == 0)
	{
	  printf("They are equal\n");	
	} 
	if(strlen(a)>strlen(b)) printf("\nFirst is greater than Second one");
	else printf("First is less than second one");
	return 0;
}
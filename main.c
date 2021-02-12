#include<stdio.h>
int main()
{
	int i=1,sum = 0;
	while(i<=20)
	{
		if(i%2==0)
		{
			sum += i;
		}
		i++;
	}
	printf("The sum of all even numbers between 1 to 20 is %d",sum);
	return 0;
}
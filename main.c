#include<stdio.h>
int solve(int n)
{
    int c=0;
    for (int i = 2; i <= n / 2;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    return c;
} 
int main()
{
    int n = 2;
    while(n<=100){
     if(solve(n)==0)
    {
        printf("%d\n",n);
    }
    n++;
    }
}

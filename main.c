//Calculate grade
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n<25) printf("Grade F");
    else if(n<50 && n>=25)
        printf("Grade C");
    else if(n<75 && n>=50)
        printf("Grade B");
    else
        printf("Grade A");

    return 0;
}
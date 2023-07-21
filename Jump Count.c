#include<stdio.h>
int main()
{
    int n;
    scanf("Enter a number: %d",&n);
    if(n%2==0)
    {
        printf("%d",n/2);
    }
    else
    {
        n = (n-1)/2;
        n = n+1;
        printf("No. of Jumps: %d",n);
    }
}

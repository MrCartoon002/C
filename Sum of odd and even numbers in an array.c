#include<stdio.h>
int main()
{
    int n;
    int a[100],i,odd=0,even=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
           even=even+a[i];
        }
        else
        {
            odd=odd+a[i];
        }
    }
    printf("%d",odd);
    printf("\n");
    printf("%d",even);
    return 0;
}

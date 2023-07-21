#include<stdio.h>
int main()
{
    int n,a[50];
    int first=1,i;
    scanf("%d",&n);
    first=a[0];
    for(i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }
    a[i]=first;

for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d \t",a[i]);
    return 0;
}

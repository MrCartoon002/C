#include<stdio.h>
int main()
{
int i,j,count=0;
int a[50],b[50];
int m,n;
scanf("%d %d",&m,&n);
for(i=0;i<m;i++)
{
    scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
    scanf("%d",&b[j]);
}
if(m==n)
{
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                count++;
                break;
            }
        }
    }
}
if(a[i]==count)
{
    printf("Two arrays are equal");
}
else
{
    printf("Two arrays are not equal");
}
return 0;
}

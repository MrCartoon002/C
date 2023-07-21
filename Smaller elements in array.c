#include<stdio.h>
int main()
{
int a[50],i,n,temp=0,k;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter k ");
scanf("%d",&k);
for(i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    j = i+1;
}
}
}
printf("enter k %d",a[k-1]);
}

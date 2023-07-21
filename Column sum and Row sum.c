#include<stdio.h>
int main()
{
    int i,j,a[50][50];
    int m,n;
    int sum=0;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=sum+a[i][j];
        }
        printf("%d ",sum);
        sum=0;
    }
    printf("\n");
    sum=0;
    for(j=0;j<n;j++)
    {
        for(i=0;i<m;i++)
        {
            sum=sum+a[i][j];
        }
        printf("%d ",sum);
        sum=0;
    }
    printf("\n");
    return 0;
}

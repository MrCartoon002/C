#include<stdio.h>
int  main()
{
    int m,n;
    int i,j;
    int a[50][50];
    scanf("%d %d",&m,&n);
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int b[50][50];
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int k;
    int mul[i][j];
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            mul[i][j]=0;
            for (k=0;k<m;k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}

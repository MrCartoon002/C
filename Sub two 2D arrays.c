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
    int sub[i][j];
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            sub[i][j]=a[i][j]-b[i][j];
            printf("%d ",sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}


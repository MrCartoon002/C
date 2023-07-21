#include<stdio.h>

int main()
{
    int a[50],m;

    printf("Enter the size of your array: \n");
    scanf("%d",&m);

    int i;
    printf("\nEnter the elements: \n");
    for(i=0; i<m; i++)
    {
        scanf("%d",&a[i]);
    }

    int n;

    printf("\nNo. of right rotation needed: \n");
    scanf("%d",&n);

    int j,last;
    for(i=0;i<n;i++)
    {
        last = a[m-1];
        for(j=m-1; j>0; j--)
        {
            a[j] = a[j-1];
        }
        a[0] = last;
    }

    printf("\nRight rotation of the given array\n");
    for(i=0; i<m; i++)
    {
        printf("%d ",a[i]);
    }
    print("\n");
    return 0;
}

#include<stdio.h>

int main()
{
    int a[20],mid,i,n;

    printf("Enter the size of your array: \n");
    scanf("%d",&n);

    printf("Enter the elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int j,k;
    for ( i = 0; i < n; i ++)
    {
        for ( j = i + 1; j < n; j++)
        {
            // use if statement to check duplicate element
            if ( a[i] == a[j])
            {
                // delete the current position of the duplicate element
                for ( k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                // decrease the size of array after removing duplicate element
                n--;

            // if the position of the elements is changes, don't increase the index j
                j--;
            }
        }
    }



    /*printf("Enter the value to split: \n");
    scanf("%d",&mid);*/

    int set1[20],set2[20],s1=0,s2=0;

    for(i=0;i<n;i++)
    {
        if(a[i]<0)
            set1[s1++] = a[i];
        else
            set2[s2++] = a[i];
    }

    printf("Value of Set1: \n");
    for(i=0;i<s1;i++)
    {
        printf("%d ",set1[i]);
    }
    printf("\nValue of Set1: \n");
    for(i=0;i<s2;i++)
    {
        printf("%d ",set2[i]);
    }

    int max_diff, sum1=0, sum2=0;

    printf("\nSum of Set1: \n");
    for(i=0;i<sizeof(set1[i]);i++)
    {
        sum1 = sum1 + set1[i];
    }
    printf("%d",sum2);
    printf("\nSum of Set2: \n");
    for(i=0;i<sizeof(set2)/sizeof(set2[0]);i++)
    {
        sum2 = sum2 + set2[i];
    }
    printf("%d",sum2);
    for(i=0;i<n;i++)
    {
        max_diff = sum2 - sum1;
    }
    printf("\n%d",max_diff);


        return 0;
}

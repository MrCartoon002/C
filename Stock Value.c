#include<stdio.h>

int main()
{
    int a[30],i,j,n,temp;
    printf("Enter the size: ");
    scanf("%d",&n);

    printf("The elements are: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

     for(i=0; i<n; i++)
    {
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i] > a[j])
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }

            }
        }
    }
    printf("Sorted elements in an array: ");
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }

    int sum = (a[n-1] + a[n-2]);

    printf("\nStock Value is: %d ",sum);

}

#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);

    int a[20];

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    zigzag(a,n);
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
        print("\n");
        return 0;
}

    int zigzag(int a[], int n)
    {
        int temp=1,i;
        for(i=0; i<n; i++)
        {

        if(temp){
        if(a[i] > a[i+1])
            swap(&a[i], &a[i+1]);
            temp=0;
    }

        else
       {
        if (a[i] < a[i+1])
            swap(&a[i], &a[i+1]);
            temp=1;
       }
       }
    }



    void swap(int *a, int *b)
    {
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
    }

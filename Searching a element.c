#include<stdio.h>
int main()
{
int a[50],n,i,Search,found;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d", &Search);
    found = 0;

    for(i=0; i<n; i++)
    {
         if(a[i] == Search)
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
    {
        printf("Element Found",Search, i + 1);
    }
    else
    {
        printf("Element Not Found",Search);
    }

    return 0;
}

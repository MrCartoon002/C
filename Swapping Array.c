#include <stdio.h>
int main()
{
    int a[50];
    int l;
    scanf("%d",&l);
    int n=3;
    for (int i = 0; i < l; i++)
    {
        scanf("%d ", a[i]);
    }
    for (int i = 0; i < l; i++)
    {
        printf("%d ", a[i]);
        for(int i = 0; i < n; i++)
        {
            int j, first;
            first = a[0];

            for(j = 0; j < l-1; j++)
            {
                a[j] = a[j+1];
            }
            a[j] = first;
        }

        printf("\n");
        for(int i = 0; i < l; i++)
        {
            printf("%d ", a[i]);
        }
        return 0;
    }
}

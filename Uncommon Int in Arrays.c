#include<stdio.h>

int main()
{
    int a[20], b[20], j, i, m, n, k=0;

    scanf("%d %d",&m,&n);

    for(i=0; i<m; i++)
    {
        scanf("%d",&a[i]);
    }

    for(j=0; j<n; j++)
    {
        scanf("%d",&b[j]);
    }

        while (i < m && j < n) {

            // If not common, print smaller
            if (a[i] < b[j]) {
                printf("%d",a[i]);
                i++;
                k++;
            }
            else if (b[j] < a[i]) {
                printf("%d",b[j]);
                k++;
                j++;
            }

            // Skip common element
            else {
                i++;
                j++;
            }
        }

        // printing remaining elements
        while (i < m) {
            printf("%d",a[i]);
            i++;
            k++;
        }
        while (j < n) {
            printf("%d",b[j]);
            j++;
            k++;
        }
        return 0;
    }

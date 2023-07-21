#include<stdio.h>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);

    int a[100],i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int profit = ((a[k]-a[k-1])+(a[k+1]-a[k+2]));
    printf("%d",profit);
}

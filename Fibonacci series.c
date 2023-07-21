#include<stdio.h>
int main()
{
 int N,i,y=0,x=1,z=0;
 scanf("%d",&N);
 for(i=0;i<=N;i++)
    {

    if(z<N)
    {
      printf("%d ",z);
    }
    if(i==1)
    {
        z=1;
    }
    else
        {
    z=x+y;
    y=x;
    x=z;
    }

    }
 return 0;
}

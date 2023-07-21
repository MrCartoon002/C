#include<stdio.h>
int main()
{
    int num,rem,sum=0,mul=1;
    scanf("%d",&num);
    while(num!=0)
    {
      rem=num%10;
      sum=sum+rem;
      mul=mul*rem;
      num=num/10;
    }
    if(sum==mul)
    printf("The numbers are equal");
    else
    printf("The numbers are not equal");
    return 0;
}

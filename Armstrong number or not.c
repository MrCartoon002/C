#include <stdio.h>
int main()
{
int num,original,sum=0,rem=0;
num=original;
scanf("%d",&num);
while(original!=0)
{
rem=original%10;
sum=sum+(rem*rem*rem);
original=original/=10;
}
if (sum==rem)
printf("It is an Amstrong number");
else
printf("It is not an Amstrong number");
return 0;
}

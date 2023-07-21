#include<stdio.h>
 int  main()
 {
   int num,count,f,sum=0,ld,temp;
   scanf("%d",&num);
   for(temp=num;num>0;num=num/10)
   {
     f=1;
     ld=num%10;
     for(count=1;count<=ld;count++)
     {
       f=f*count;
     }
     sum=sum+f;
   }
   if(sum==temp)
   {
   printf("Strong Number");
   }
   else
   {
   printf("Not a Strong Number");
   }
   return 0;
 }

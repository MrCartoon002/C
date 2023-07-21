#include<stdio.h>
int add(int,  int );
int sub(int,  int );
int mul(int,  int );
int div(int,  int );
int mod(int,  int );
int main()
{
    char ch;
    int a,b;
    while(1)
    {
        scanf("%c",&ch);
        if(ch=='x')
            exit(0);
        scanf("%d %d",&a,&b);
    }
    switch (ch)
    {
        int ans;
        case '+';
        ans=a+b;
        printf("%d",ans);
        break;
        case '-';
        sub=a-b;
        printf("%d",sub);
        break;

    }
}
{
    int x=6,y=7,sum;
    sum=add(x,y);
    printf("%d",sum);
}
int add(int a,int b)
{
    return (a+b);
}

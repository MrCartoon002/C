#include<stdio.h>

int main()

{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    int find;
    printf("\nEnter the digit to be counted: ");
    scanf("%d",&find);

    int count = 0;

    for(int i=1; i<=num; i++)
    {
        int temp=i;
        while(temp!=0)
        {
            int digit=temp%10;
            if(digit==find)
            {
                count++;
            }
            temp/=10;
        }
    }
    printf("\nNo. of digit %d in the number is %d",find,count);
    return 0;
}

triangle{i}[j]=triangle[i-1][j]+triangle[i-1][j-1];

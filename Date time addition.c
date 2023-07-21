#include<stdio.h>

int main()
{
    long double birth;
    printf("Enter your birth:\n");
    scanf("lf",&birth);

    long double val;
    printf("Enter the value to add with:\n");
    scanf("%lf",&val);

    long double add = birth + val;
    printf("The final value is:\n");
    printf("%lf",add);

    return 0;
}

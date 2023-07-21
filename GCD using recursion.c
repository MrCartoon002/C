#include<stdio.h>

int HCF(int m, int n);

int main() {
    int m, n;
    printf("Enter the numbers: ");
    scanf("%d %d", &m, &n);
    printf("GCD of %d and %d is %d.", m, n, HCF(m, n));
    return 0;
}

int HCF(int m, int n) {
    if (n!=0)
        return HCF(n,m%n);
    else
        return m;
}

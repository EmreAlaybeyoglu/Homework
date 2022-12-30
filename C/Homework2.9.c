#include <stdio.h>

int main()
{
    int sum = 0;
    int n,a,b;
    scanf_s("%d", &n);
    a = n;
    while (n > 0) {

        b = n % 10;
        n /= 10;
        sum += b * b * b;

    }
    if (sum == a) { printf("It is an Armstrong Number"); }
    else { printf("It is not an Armstrong Number"); }
    
    return 0;
}
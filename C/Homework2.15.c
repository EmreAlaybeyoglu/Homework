#include <stdio.h>

int main()
{
    int sum = 0;
    int n,a,b;
    scanf_s("%d", &n);
    a = n;
    while (a > 0) {

        b = a % 10;
        sum = sum * 10 + b;
        a /= 10;

    }
    if (sum ==n) { printf("It is a Palindrome Number"); }
    else { printf("It is not a Palindrome Number"); }    
   
    return 0;
}
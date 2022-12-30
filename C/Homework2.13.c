
#include <stdio.h>

int main()
{
    int n,b,f;
    scanf_s("%d", &n);
    int a = n;
    int sum = 0;
    while (a > 0) {

        b = a % 10;
        a /= 10;
        f = 1;
        for (int i = 1; i <= b; i++) {
            
            f *= i;

        }
        sum += f;
    }
    
    if (sum == n) { printf("It is a Strong Number"); }
    
    else { printf("It is not a Strong Number"); }
    
    return 0;
}
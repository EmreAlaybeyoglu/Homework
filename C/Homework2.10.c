#include <stdio.h>

int main()
{
    int n,a,b,sum;
    scanf_s("%d", &n);
    for (int i = 1; i < n; i++) {

        a = i;
        sum = 0;

        while (a > 0) {

            b = a % 10;
            a /= 10;
            sum += b * b * b;

        }
        if (sum == i) { printf("%d\n",i);}
        
    }
    
    return 0;
}
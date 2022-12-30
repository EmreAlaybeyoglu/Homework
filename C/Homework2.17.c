#include <stdio.h>

int main()
{
    float sum = 0;
    int n;
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++) {
        
        sum += 1.0 / (i + 1.0);
        printf("1/%d\n",i+1);
             
    }
    printf("sum=%f", sum);
    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c,delta,x1,x2;
        
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    scanf_s("%d", &c);
  
    delta = b * b - (4 * a * c);
    x1 = (-b + sqrt(delta)) / 2 * a;
    x2 = (-b - sqrt(delta)) / 2 * a;
    
    if (delta < 0) {

        printf("There are no real roots");
        return 0;
    }
    else if (delta == 0) {

        printf("Root=%d", x1);

    }
    else {

        printf("FirstRoot=%d\n", x1);
        printf("SecondRoot=%d", x2);
    }
       
    return 0;
}
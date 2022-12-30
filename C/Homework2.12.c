#include <stdio.h>

int main()
{
    int n,a,counter,sum;

    scanf_s("%d", &n);

    for (int i = 1; i < n; i++) {

        a = i;
        counter = 1;
        sum = 0;
       
        while (counter < a) {

            if (a % counter == 0) {

                sum += counter;

            }
            counter++;
        }
        if (sum == a) { printf("%d\n", a); }
       
    }

    return 0;
}
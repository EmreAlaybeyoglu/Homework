#include <stdio.h>

int main()
{
    int number;
    int sum = 0;
    int counter = 1;
    scanf_s("%d", &number);
    while (counter < number) {

        if (number % counter == 0) {

            sum += counter;
            
        }        
        counter++;
    }
    if (sum == number) { printf("It is a Perfect Number"); }
    else { printf("It is not a Perfect Number"); }

    return 0;
}
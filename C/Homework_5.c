#include <stdio.h>

int main()
{
	float Fahrenheit;
	scanf_s("%f", &Fahrenheit);
	printf("%f", (Fahrenheit - 32) / (1.8));

	return 0;
}
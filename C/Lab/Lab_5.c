#include <stdio.h>

int main()
{
	int a, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	if (a > 50 && b > 50) {

		printf("%d", a + b);

	}
	else {

		printf("Please enter valid numbers");
		return 0;

	}
	return 0;
}
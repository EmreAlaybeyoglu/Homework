#include <stdio.h>

int main()
{
	int a, b, c, d;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	scanf_s("%d", &d);
	if (a == b && b == c && c == d) {

		printf("true");
	}
	else {

		printf("false");

	}
	return 0;
}
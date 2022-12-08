#include <stdio.h>

int main()
{
	int a, b, c;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	c = a;
	a = b;
	b = c;
	printf("a=%d\n", a);
	printf("b=%d", b);

	return 0;
}
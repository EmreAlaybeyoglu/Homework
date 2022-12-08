#include <stdio.h>

int main()
{
	int a, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	int area = a * b;
	int perimeter = 2 * (a + b);
	printf("area of the square = %d\n", area);
	printf("perimeter of the square = %d", perimeter);
		
	return 0;
}
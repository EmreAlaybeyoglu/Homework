#include <stdio.h>

int main()
{
	const float pi = 3.14;
	float radius;
	float perimeter;
	float area;
	int s;

	scanf_s("%d", &s);
	scanf_s("%f", &radius);

	if (s == 1) {

		perimeter = 2 * pi * radius;
		printf("%f", perimeter);
	}
	else if (s == 2) {

		area = pi * radius * radius;
		printf("%f", area);
	}
	else {

		printf("Wrong Input");
	}
	return 0;
}
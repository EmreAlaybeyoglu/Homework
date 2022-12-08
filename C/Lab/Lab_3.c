#include <stdio.h>

int main()
{
	
	int year;
	scanf_s("%d", &year);
	if (year % 4 == 0) {

		printf("true");

	}
	else {

		printf("false");

	}
	return 0;
}
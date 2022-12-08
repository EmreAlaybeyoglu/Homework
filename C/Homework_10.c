#include <stdio.h>

int main()
{
	int a,b,c;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	
	if (a > b) {

		if (a > c) {

			printf("%d", a);

		}
		else {

			printf("%d", c);

		}

	}
	else if (b > c) {

		printf("%d", b);

	}
	else {

		printf("%d", c);
	}
		
	return 0;
}


#include <stdio.h>
#define SIZE 11

int main() {

	int arr[SIZE];
	int input;
	int temp;
	int i = 0;

	for (; i < SIZE; i++) {

		scanf_s("%d", &input);
		arr[i] = input;

	}

	i -= 1;

	for (int j = 0; j < SIZE; j++) {

		if (i > j) {

			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
			i--;
		}
	}


	for (int k = 0; k < SIZE; k++) {


		printf("%d\n", arr[k]);

	}


	return 0;



}
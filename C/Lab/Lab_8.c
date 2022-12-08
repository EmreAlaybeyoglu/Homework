#include <stdio.h>

int main()
{
	int no;
	int midterm;
	int final;
	int note;
	scanf_s("%d", &no);
	scanf_s("%d", &midterm);
	scanf_s("%d", &final);
	note = (midterm* 0.4) + (final * 0.6);
	printf("%d", no);
	printf("\n%d", note);
		

	return 0;
}

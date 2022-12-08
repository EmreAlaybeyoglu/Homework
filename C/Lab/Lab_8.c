#include <stdio.h>

int main()
{
	int no;
	int visa;
	int final;
	int note;
	scanf_s("%d", &no);
	scanf_s("%d", &visa);
	scanf_s("%d", &final);
	note = (visa * 0.4) + (final * 0.6);
	printf("%d", no);
	printf("\n%d", note);
		

	return 0;
}
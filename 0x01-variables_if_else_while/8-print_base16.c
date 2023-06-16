#include <stdio.h>
/**
* main - Starting point
* Return: 0
*/
int main(void)
{
	int number;

	for
		(number = 0;
		number <= 9;
		number++) {
			putchar(number + '0');
	}
	for
		(number = 0;
		 number < 6;
		 number++) {
			putchar(number + 'a');
	}
	putchar('\n');
	return (0);
}

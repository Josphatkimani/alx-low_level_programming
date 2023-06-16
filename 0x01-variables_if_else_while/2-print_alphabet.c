#include <stdio.h>
/**
* main - Starting point
* Return: 0
*/
int main(void)
{
	char d;
	
	d = 'a';
	while(d <= 'z') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}

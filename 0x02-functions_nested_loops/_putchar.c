#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to sdout
 * @c: the charcater to print
 *
 * Return: 1
 * On error, -1 is required, and errno is set  approximately
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}

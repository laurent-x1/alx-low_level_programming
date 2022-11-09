#include <unistd.h>

/**
 * _putchar - write charactr c to stdout
 * @c: The character
 *
 * Return: On success 1.
 * on error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

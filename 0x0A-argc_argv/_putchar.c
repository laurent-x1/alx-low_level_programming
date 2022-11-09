#include <unisted.h>

/**
 * _putchar - writes the chr c to stdout
 * @c: The character been printed
 *
 * Return : on Success 1
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}

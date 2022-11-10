#include "main.h"

/**
 * malloc_checked - array for string print
 *
 * @b: allocated memory
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);

}

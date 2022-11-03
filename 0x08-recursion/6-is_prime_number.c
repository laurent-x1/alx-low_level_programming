#include "main.h"

/**
 * check - checks to see if number is prime
 * @f:int
 * @g:int
 * Return:Always 0
 */
int check(int f, int g)
{
	if (g < 2 || g % f == 0)
		return (0);
	else if (f > g / 2)
		return (1);
	else
		return (check(f + 1, g));
}

/**
 * is_prime_number - states if number is prime
 * @x:int
 * Return:Always 0
 */
int is_prime_number(int x)
{
	if (x == 2)
		return (1);
	return (check(2, x));
}

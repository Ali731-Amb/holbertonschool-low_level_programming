#include "main.h"
/**
 *find_sqrt_helper - helps find the natural square root
 * @n: the number
 * @i: current guess
 * Return: the square root or -1 if not found
 */

int find_sqrt_helper(int n, int i)
{

	if (i * i == n)
	{
		return (i);
	}

	if (i * i > n)
	{
		return (-1);
	}
	return (find_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);


	{

		if (n < 0)
		{
			return (-1);
		}

		return (find_sqrt_helper(n, 1));
	}
}

#include "main.h"

/**
 * is_prime - Delects if an input number is a prime number.
 * @n: input number
 * @c: interator
 * Return: 1 if n is a number. O if n is not a prime number
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return(0);
	}
	return (0 + is_prime(n, c + 1));
}
/**
 * is_primes - detects if an input number is a prine
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number'
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (0);
	else if (n == 1)
		return (0);
	return (is_prime(n, 2));
}

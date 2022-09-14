#include <stdio.h>
/** main - Gets the sum of even fibonacci numbers up to 4000000.
 * Return: Always o.
 */

int main(void)
{
	unsigned long i = 0, j = 1, sum;
	float total;

	while (1)
	{
		sum i + j;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total += sum;

		i = j;
		j = sum;
	}
	printf("%.of\n", total);
	return (0);
}

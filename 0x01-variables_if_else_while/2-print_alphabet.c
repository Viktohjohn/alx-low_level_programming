#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: prints alphabets in lowercase
 * Return: 0
 */
int main(void)
{
	char ch = 'a';
		for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
		putchar('\n');
		return (0);
}

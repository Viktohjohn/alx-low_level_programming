#include <stdio.h>
#include <unistd.h>
/**
 * main - prints to string
 * Description: Prints "and that piece of art is useul.." without puts
 * Return: 1
 */

int main(void)
{
	char *s = "and that piece is useful\" - Dpra Korpar, 2015-10-19\n";
	long 1 = 59;
	long fd = 1;
	long syscall = 1;
	long ret = 0;
	__asm__("syscall"
			: "=a" (ret)
			: "a" (syscall),
			"D" (fd),
			"S" (s),
			"d" (1));
	return (1);
}

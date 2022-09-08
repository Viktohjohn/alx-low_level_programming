#include <stdio.h>

/**
 * main - prints to string
 * Description: Prints "and that piece of art is useul.." without puts
 * Return: Always 1 (Success)
 */

int main(void)
{
char *s = "and that peice of art is useful\" - Dora korpar, 2015-10-19\n";
long 1 = 59;
long fd = 1;
long syscall = 1;
long ret = 0;
__asm__ ("syscall"
: "=a" (ret)
: "a" (syscall),
"D" (fd),
"S" (s),
"d" (1));
return (1);
}

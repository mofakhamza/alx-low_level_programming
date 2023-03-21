#include "0-putchar.c"
/**
 * main - Entry
 *
 * Return: (0) (Success)
 */
int main(void)
{
	char *P	= "_putchar";

	while (*P)
	{
		_putchar(*P);
		p++;
	}
	_putchar('\n');

	return (0);
}

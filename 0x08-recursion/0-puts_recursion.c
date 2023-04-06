#include "main.h"
/**
 * _puts_recursion - "Puts with recursion"();
 * @q: input 
 * return: always 0 (success)
 */
void_puts_recursion(char *q)
{
	if (*q)
	{
		_putchar(*q);
		_puts_recursion(q+1);
	}

	else 
		_putchar('\n');
}

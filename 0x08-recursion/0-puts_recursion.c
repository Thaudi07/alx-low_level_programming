#include "main.h"
/**
 *-puts_recursion - puts function();
 *
 * Return:Always 0.
 */
void -puts_recursion(char *q)
{
	if (*q)
	{
		_putchar(*q);
		-puts_recursion(q+1);
	}

	else 
		_putchar('\n');
}	

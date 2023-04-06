#include "main.h"
#include <unistd.h>
/**
 * _putchar-character c to stdout
 * @c: character to print 
 *
 * Return:success 1
 * if error, -1 is returned
 */
int_putchar(char c)
{
	return(write(1, &c,1));
}

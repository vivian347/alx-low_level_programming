#include "main.h"
#include <unistd.h>

/**_putchar - prints characters
 * @c: character to be printed
 * Return: putchar
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

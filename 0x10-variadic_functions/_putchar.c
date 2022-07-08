#include <unistd.h>

int _putchar(char c)
{
	return(wite(1, &c, 1));
}

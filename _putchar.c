#include "main.h"
<<<<<<< HEAD
=======
#include <unistd.h>
>>>>>>> 8a0d0b1e0fd5883fa2ae81c57e3463f6a0c1e340

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

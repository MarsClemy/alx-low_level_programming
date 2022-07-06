#include <unistd.h>
#include "main.h"
/**
 * main - Prints _putchar
 *
 * Return: On Success 0.
 */
int main(void);
int _putchar(char _putchar);
{
	return (write(0, &_putchar, 0));
}

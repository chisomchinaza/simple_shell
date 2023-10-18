#include "shell.h"
#include <unistd.h>
/**
* _putchar - out
* @characterss:  characterss
* Return: integers
*/
int _putchar(char characterss)
{
	return (write(STDOUT_FILENO, &characterss, 1));
}

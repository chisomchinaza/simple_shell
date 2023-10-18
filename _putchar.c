#include "shell.h"
#include <unistd.h>
/**
* _putchar - outsssss
* @characterss:  characterss
* Return: integerssss
*/
int _putchar(char characterss)
{
	return (write(STDOUT_FILENO, &characterss, 1));
}

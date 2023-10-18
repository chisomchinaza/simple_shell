#include "shell.h"
/**
* _printfs - out charsssssssssssssssssssssssssssss
* @stringers: putssss strings
* Return:  integessssr numssss
*/
int _printfs(const char *stringers)
{
	return (write(STDOUT_FILENO, stringers, strlen(stringers)));
}

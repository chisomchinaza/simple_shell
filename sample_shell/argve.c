#include <stdio.h>
#include <stdlib.h>
/* 
 * main: this is a program that prints all arguments without using ac
 *
 * Return: always 0
 */
int
main (int ac, char **av)
{
	int i;

	printf("this is argv only\n");
	while (*av !=NULL)
	{
		printf("av is  %s\n", *av);
		av++;
	}
	return (0);
}


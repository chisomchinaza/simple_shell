#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

/*
 * main: this is a program that displays a prompt "chisom$ ", wait for the user to enter a command, then prints it on the next line.
 *
 * Return: always 0
 */
int 
main(int ac, char **av)
{

	size_t c =0;/* the size of the buffer, set to 0*/
	char *bpointer = NULL; /* this is the buffer pointer*/

	printf("chisom$ ");
	getline(&bpointer, &c, stdin);
	printf("%s", bpointer);
	printf("bpointer size, %ld\n", c);

	free(bpointer);
	return(0);
}

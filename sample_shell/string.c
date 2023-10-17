#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/*
 * main: this program splits a string and return an array of each string
 *
 * return: always 0
 */

int 
main(void)
{
	char delim[4]= "-"; /* always include the number of delimiter*/
	char str[]= "chisom-is-learning-c";
	char *str_array= strtok(str, delim);

	
	str_array= strtok(str, delim);
	printf("%s\n", str_array);

	str_array= strtok(NULL, delim);
	printf("%s\n", str_array);

	str_array= strtok(NULL,delim);
	printf("%s\n", str_array);

	str_array= strtok(NULL, delim);
	if (str_array ==NULL)
	{
		printf("the end");
	}
	else
	{
		printf("not ended");
	}


	return(0);
}


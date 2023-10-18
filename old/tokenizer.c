#include "shell.h"

/*
 * string tokenization: this program handles 
 * the tokenization function, using semicolon ";"
 * as the delimiter.
 *
 * return: 0 as always
 */

void tokenize_input(char *input, char **tokens)
{
	char *token =strtok(input,";");
	int len;

	while(token != NULL)
	{
		while (*token && (*token == ' ' || *token == '\t'))
		{
			token++;
		}

		len = strlen(token);
		while (len > 0 && (token[len - 1] == ' ' || token[len - 1] == '\t' || token[len - 1] == '\n'))
		{
		token[len -1] = '\0';
		len --;
		}

		if (len > 0)
		{
			tokens[i] = token;
			i++;
		}

		token = strtok(NULL, ";");
	}
	
	tokens[i] = NULL;
}








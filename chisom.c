#include "shell.h"
/**
* main -  program
* @argc:  being passed to the sytem
* @argv: argumentsss
* @env: variabless
* Return:  integersss
*/
int main(int argc, char *argv[], char **env)
{
(void) argc;
(void) argv;
int exitnum;
size_t numline;
size_t sized;
char *cders;

cders = NULL;
exitnum = 0;

while (1)
{
if (isatty(0) == 1)
output();

input(&cders, &sized);

if (strcmp(cders, "exit") == 0)
{
break;
}
else if (strncmp(cders, "exit ", 5) == 0)
{
exitnum = atoi(cders + 5);
break;
}
else if (strcmp(cders, "env") == 0 || strcmp(cders, "printenv") == 0)
_envprinter(env);
_exectutor_printer(cders);

numline = strcspn(cders, "\n");
if (numline < sized)
cders[numline] = '\0';

if (cders != NULL)
cders = NULL;
}

return (exitnum);
}

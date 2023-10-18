#include "shell.h"
/**
* _envprinter - stdout envs
* @env: variables from enviroment
*/
void _envprinter(char **env)
{
int o;
char c = '\n';

for (o = 0; env[o] != NULL; o++)
{
_printfs(env[o]);
_putchar(c);
}
}

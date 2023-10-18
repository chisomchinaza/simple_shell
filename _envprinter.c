#include "shell.h"
/**
* _envprinter - stdout envsssss
* @env: varim enviromentssssssssss
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

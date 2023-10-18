#include "shell.h"
/**
* getter - read input
* @bufs: use in storing read input
* @siss: buffer size
* Return: integer
*/
ssize_t getter(char **bufs, size_t *siss)
{
static char buffs[1024];

ssize_t numreader;

*bufs = NULL;

if (*bufs == NULL)
{
*bufs = buffs;
}
*siss = sizeof(buffs);

numreader = read(0, *bufs, *siss);

if (numreader == -1)
{
perror("Error");
exit(EXIT_FAILURE);
}
else if (numreader == 0)
{
if (isatty(0))
_printfs("\n");
exit(EXIT_SUCCESS);
}

return (numreader);
}

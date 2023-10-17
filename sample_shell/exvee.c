#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
    char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};/* replace the bin/ls with ls only and declare char *envv= NULL;*/

    printf("Before execve\n");
    if (execve(argv[0], argv, NULL) == -1)/*set null with envv and argv[bin/ls] run yoir code to know whats up*/
    {
        perror("Error:");
    }
    printf("After execve\n");
    return (0);
} 

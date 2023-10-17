#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t parent_pid;
   pid_t child_pid;
  parent_pid = getppid();
    pid_t child_pid = getpid();

    printf("the parent_pid is: %u, pid is %u\n", parent_pid, child_pid);
    return (0);
}

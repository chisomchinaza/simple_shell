 #include <stdio.h>
#include <unistd.h>
/*
 * main = pid
 * Return 0
 */
int main()
{
	pid_t parent_pid;
	
	parent_pid = getppid();
	printf("%u\n",  parent_pid);
	return 0;
}

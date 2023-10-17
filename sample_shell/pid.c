 #include <stdio.h>
#include <unistd.h>
/*
 * main = pid
 */
int main()
{
	pid_t child_pid;
	
	child_pid = getpid();
	printf("%u\n",  child_pid);
	return 0;
}

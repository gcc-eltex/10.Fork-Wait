#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main()
{
	int pid;
	printf("pid: %d, ppid: %d\n", getpid(), getppid());
	pid = fork();
	if(pid == 0)
	{
		printf("pid: %d, ppid: %d\n", getpid(), getppid());
		pid = fork();
		if(pid == 0)
		{
			printf("pid: %d, ppid: %d\n", getpid(), getppid());
			sleep(10);
		}
		else
		{
			pid = fork();
			if(pid == 0)
			{
				printf("pid: %d, ppid: %d\n", getpid(), getppid());
				sleep(10);
			}
		}
		sleep(10);
	}
	else
	{
		pid = fork();
		if(pid == 0)
		{
			printf("pid: %d, ppid: %d\n", getpid(), getppid());
			pid = fork();
			if(pid == 0)
			{
				printf("pid: %d, ppid: %d\n", getpid(), getppid());
				sleep(10);
			}
			sleep(10);
		}
	}
	sleep(10);
}
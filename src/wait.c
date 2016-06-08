#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int main()
{

	int pid;
	int status = 0;
	pid= fork();
	if(pid == 0)
	{
		for(int i = 0; i < 5; i++)
		{
			printf("I'm children!\n");
			sync();
			sleep(1);
		}
	}
	else
	{
		wait(&status);
		printf("I'm parent!\n");
		sync();
		return(0);
	}
}
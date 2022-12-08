#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
	pid_t pid1, pid2;
	if ((pid1=fork())< 0)
	{
		printf("Fork error");
	}
	else if( pid1==0)
	{
		printf("first child pid=%d\n", getpid());
		pid2=fork();
		if( pid2 > 0)
			exit(0);
		else if(pid2==0)
			printf("second child pid = %d\n parent pid=%d\n",
				getpid(), getppid());
		exit (0);
	}
}
#include<stdio.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	pid=fork();
	if(pid==0)
	{
		printf("Im child and my id is %d and my parent id is %d\n",getpid(),getppid());
	}
	else
	{
		getchar();
		int status;
		wait(&status);
		getchar();
		printf("Im parent and my id is %d and my parent id is %d\n",getpid(),getppid());
	}
}

#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	pid=fork();
	if(pid==0)
	{
		printf("Iam child and my id is %d and my parent id is %d\n",getpid(),getppid());
		sleep(5);
		printf("Iam child and my id is %d\n",getpid());
		printf("Iam parent and my id is %d\n",getppid());

	}
	else
	{
		getchar();
		printf("Iam parent and my id is %d and my parent id is %d\n",getpid(),getppid());
	}
}

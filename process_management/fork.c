#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int a=10;
int main()
{
	int x=6;
	int y=8;
	pid_t pid=-1;
		pid=fork();
	if(pid==0)
	{
		printf("Iam child and my id is %d and my parent id is %d\n",getpid(),getppid());
		printf("a=%d,b=%d\n",x,y);
	}
	else
	{
		sleep(5);
		printf("iam parent and my id is %d and my parent id is %d\n",getpid(),getppid());
	}
	printf("x=%d,y=%d\n",x,y);
	printf("a=%d\n",a);
}

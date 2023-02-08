#include<stdio.h>
#include<unistd.h>
int main(){
	if(fork()!=0){
		printf("Child process\n The process id of parent process: %d\n",getpid());
	}
	else
	{
		printf("Child process ends\n");
		printf("The process id of child process: %d\n",getpid());
	}
	return 0;
}

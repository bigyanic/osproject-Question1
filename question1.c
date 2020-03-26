#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	int n=0;
	int m=0;
	
	pid_t pid;

		do
		{
			printf("Please enter a number greater than 0\n"); 
  			scanf("%d", &m);	
		}while (m <= 0);

		pid = fork();

		if (pid == 0)
		{
			printf("Child is working properly\n");
			printf("%d\n",m);
			while (m!=1)
			{
				if (m%2 == 0)
				{
					m = m/2;
				}
				else if (m%2 == 1)
				{
					m = 3 * (m) + 1;
				}	
			
				printf("%d\n",m);
			}
		
			printf("Child process is done\n");
		}
		else
		{
			printf("Parents is waiting on child process\n");
		wait();
			printf("Parent process is done\n");
		}
	return 0; 
}

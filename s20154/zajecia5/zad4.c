#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>


int main(){
    if (fork() ){
	printf("PID  %d\n", getpid());
	printf("PPID %d\n", getppid());
        printf("Rodzic czeka\n");
        wait(NULL);
        printf("Rodzic wznowił prace\n");

    } else {
        sleep(3);
        printf("PID  %d\n", getpid());
        printf("PPID %d\n", getppid());
        printf("Koniec dziecka\n");

    }

    return 0;
}

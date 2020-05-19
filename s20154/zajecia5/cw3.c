#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>


int main(){
        pid_t pid = fork();
        printf("Pid %d", getpid());
        printf("PPid %d", getppid());
        if( pid > 0) {
                printf("Rodzic czeka na dziecko\n");
                fflush(stdout);
                wait(NULL);
                printf("Czekamy");
                fflush(stdout);
        } else {
                printf("Dziecko operuje\n");
                fflush(stdout);
                sleep(3);
                printf("Czekamy");
                fflush(stdout);
        }

        return 0;
}


#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    printf("PID  %d\n", getpid());
    printf("PPID %d\n", getppid());
    return 0;
}



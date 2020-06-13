#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    int x;
    printf("PID  %d\n", getpid());
    printf("PPID %d\n", getppid());
    scanf("%d", &x);
    printf("%d", x);
    return 0;
}

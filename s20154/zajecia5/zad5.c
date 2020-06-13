#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>


int main(int argc, char** argv) {
    int limit;
    int suma;
    int i;
    int j;

    if(argc != 2){
	printf("Zla ilosc argumentow.\n");
        return -1;
    }
   
    limit = atoi(argv[1]);
    suma = 0;
    if(fork()){
        wait(NULL);
        for(i = 0; i <= limit; i++) {
            suma += i;
        }
        printf("Suma: %d\n", suma);

    } else {
	printf("Nie parzyste: ");
        for (j=1; j<=limit; j+=2) {
            printf("%d ", j);
        }
	printf("\nKoniec nieparzystych\n");
    }

    return 0;
}

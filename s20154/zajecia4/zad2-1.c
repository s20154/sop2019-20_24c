#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {
    int ilosc;
    int i;
    int tab[100];
    FILE *fp;

    if((fp = fopen(argv[1], "r")) ){
        fscanf(fp, "%d", &ilosc);
        for(i = 0; i < ilosc; i++) {
            fscanf(fp, "%d", &tab[i]);
        }
        fclose(fp);

        for(i = ilosc-1; i >= 0; i--){
            printf("%d ", tab[i]);
        }

    }else{
        printf("Podaj ilosc liczb ktora wprowadzisz: \n");
        scanf("%d", &ilosc);
	i=0;
        while(i<ilosc){            
            scanf("%d", &tab[i]);
            i++;
        }

        for(i = ilosc-1; i >= 0; i--){
            printf("%d ", tab[i]);
        }

    }

    printf("\n");
    return 0;
}


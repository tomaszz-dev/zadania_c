#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* colMinima(int n, int m, int tablica[n][m]){
    printf("%d", tablica[0][1]);

    int *p = (int*)malloc(m*sizeof(int));


    for(int j=0;j<m;j++){
        int min = tablica[0][j];
        for(int i=0;i<n;i++){
            if (tablica[i][j] < min){
                min = tablica[i][j];
            }
        }
        p[j] = min;
    }
    return p;
}




int main() {
    printf("hejka3\n");

    int n = 3;
    int m = 3;

    int tablica[3][3] = {
        {1,  7, 3},  // wiersz 0
        {4,  2, 6},  // wiersz 1
        {-1,-5, 4}   // wiersz 2
    };


    int *rezultacik = colMinima(n,m,tablica);
    printf("Wyniki %d,%d,%d", rezultacik[0],rezultacik[1],rezultacik[2]);

    free(rezultacik);

    return 0;
}

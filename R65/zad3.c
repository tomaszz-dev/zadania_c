#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int isIdentity(int **tablica, int n)
{
    int punkty = 0;
    for(int i = 0; i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d", tablica[i][j]);
            if(j == i){
                if (tablica[i][j] == 1){
                    punkty++;

                }
            }
            else{
                if(tablica[i][j] == 0){
                    punkty++;
                }
                else{
                    punkty--;
                }
            }
        }
    }
    if (punkty == n*n){
        return 1;
    }
    else{
        return 0;
    }
}




int main(void)
{
    int n = 3;

    int** tablica = malloc(n*sizeof(int*));
    for(int i = 0; i<n;i++){
        tablica[i] = malloc(n* sizeof(int));
    }

    tablica[0][0] = 1; tablica[0][1] = 0; tablica[0][2] = 0;
    tablica[1][0] = 0; tablica[1][1] = 1; tablica[1][2] = 0;
    tablica[2][0] = 0; tablica[2][1] = 0; tablica[2][2] = 1;

    for(int i= 0; i<n; i++){
        printf("\n");
        for(int j=0;j<n;j++){
            printf("%d", tablica[i][j]);
        }
    }
    printf("wynik: %d",isIdentity(tablica,n));
}

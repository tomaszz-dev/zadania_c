#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int widestRow(int n, int m, int **tab)
{
    int rozpietosc = 0;

    // 1. NAJPIERW otwierasz pętlę po wierszach (i)
    for(int i = 0; i < n; i++){

        // 2. Ustawiasz min i max na start tego konkretnego wiersza
        int najm = tab[i][0];
        int najw = tab[i][0];

        // 3. Wchodzisz w pętlę po kolumnach (j), żeby przeszukać ten wiersz
        for(int j = 0; j < m; j++){
            if(tab[i][j] < najm){
                najm = tab[i][j];
            }
            if(tab[i][j] > najw){
                najw = tab[i][j];
            }
        }

        // 4. Skończyłeś wiersz? Sprawdzasz, czy jego rozpiętość jest rekordowa
        if ((najw - najm) > rozpietosc){
            rozpietosc = (najw - najm);
        }
    } // 5. Dopiero tu zamykasz pętlę po wierszach (i)

    return rozpietosc;
}

int main(){
    int n = 3;
    int m = 3;

    int **tab = malloc(n*sizeof(int*));

    for (int i= 0;i<n;i++){
        tab[i] = malloc(m*sizeof(int));
    }

    tab[0][0] = 1; tab[0][1] = 7; tab[0][2]=3;
    tab[1][0] = 4; tab[1][1] = 5; tab[1][2]=6;
    tab[2][0] =-2; tab[2][1] = 8; tab[2][2]=0;

    printf("%d",widestRow(n,m,tab));
    free(tab);
    tab = NULL;
}

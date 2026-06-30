#include <stdio.h>
#include <stdlib.h>

int sumDiagonal (int** macierz, int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+= macierz[i][i];
        }
    return sum;
}

int main (){
    int w0[] = {2, 3, -3};
    int w1[] = {1, 4, 7};
    int w2[] = {-3, -6, 11};

    // 2. Oszukujemy system: tworzymy tablicę wskaźników, która na nie wskazuje
    // To jest dokładnie ten wymagany `int**`
    int* tablica[] = {w0, w1, w2};

    // 3. Wywołanie (musisz przekazać rozmiar 3)
    printf("%d\n", sumDiagonal(tablica, 3));
}

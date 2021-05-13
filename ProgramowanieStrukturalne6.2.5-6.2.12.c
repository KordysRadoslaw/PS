#include <stdio.h>
#include <stdlib.h>

int** zad_6_2_1(const int, const int);
int*** zad_6_2_5v1(const int, const int, const int);
int** zad_6_2_2(const int, const int);
int*** zad_6_2_6v1(const int, const int, const int);
int zad_6_2_11(int tab[][100], const int);
int zad_6_2_12(const int n, const int m, int tab[n][m]);

int main()
{
    /*
//    nt arr3d[3][2][4] = {
//{{1, 2, 3, 4}, {5, 6, 7, 8}},
//{{9, 10, 11, 12}, {13, 14, 15, 16}},
//{{17, 18, 19, 20}, {21, 22, 23, 24}}
//};
//to jest tablica 3wymiarowa
*/

    int tab[2][1] = {{1}, {2}};
    int (*wsk)[1] = tab;

    //printf("Adres przechowywany we wskazniku: %p, wskazywana wartosc: %d.\n", wsk, **wsk);
    //printf("Adres przechowywany we wskazniku: %p, wskazywana wartosc: %d.\n", wsk, *(*wsk) + 1);


    return 0;
}

int** zad_6_2_1(const int n, const int m){
    //n kolumny, m rzedy
    int **tab = (int **)malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++){
            tab[i] = (int*)malloc(m * sizeof(int));
    }
    return tab;
}
void zad_6_2_3(int **wsk, const int rows, const int columns){
    //free(wsk);
    for(int i = 0; i < columns; i++){
        free(*(wsk + i));
    }
    free(wsk);
    wsk = NULL;

}
int*** zad_6_2_5v1(const int n, const int m, const int v){
    int *** tab = (int ***)malloc(n * sizeof(int**));
    for(int i = 0; i < n; i++){
        tab[i] = (int**)malloc(m * sizeof(int*));
        for(int j = 0; j < m; j++){
            tab[j] = (int*)malloc(v * sizeof(int));
        }
    }
    return tab;
}

void zad_6_2_5v2(int ***wsk, const int n, const int m, const int v){
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m  ; j++){
            free(*(*(wsk + i) + j));
        }
    }
    free(wsk);
    wsk = NULL;
}
int** zad_6_2_2(const int n, const int m){
    int **wsk;
    wsk = (int**)malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++){
        wsk[i] = (int*)malloc(m * sizeof(int));

    }
    return wsk;
}

int*** zad_6_2_6v1(const int n, const int m, const int v){
    int ***wsk = (int***)malloc(n * sizeof(int**));
    for(int i = 0; i < n; i++){
        wsk[i] = (int**)malloc(m * sizeof(int*));
        for(int j = 0; j < m; j++){
            wsk[i][j] = (int*)malloc(v * sizeof(int));
        }
    }
    return wsk;
}
void zad_6_2_6v2(int ***wsk, const n, const m, const v){
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m  ; j++){
            free(*(*(wsk + i) + j));
        }
    }
    free(wsk);
    wsk = NULL;
}
int zad_6_2_11(int tab[][100], const int a){
    int tab1[a][100];
    int sum = 0;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < 100; j++){
            sum += tab1[i][j];
        }
    }
    return sum;
}
int zad_6_2_12(const int n, const int m, int tab[n][m]){
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum += tab[i][j];
        }
    }
    return sum;
}


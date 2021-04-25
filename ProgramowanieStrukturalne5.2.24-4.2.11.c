#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ** function1(unsigned int, int[]);
int main()
{
    char * a = "slowo";
    char ** b;
    //kopiuj2(a, b);


    return 0;
}
//5.2.24
void kopiuj(char * string, char table[]){
    //size_t size = (char*)malloc(strlen(string) + 1);
    strcpy(table, string);

}
//5.2.25
void kopiuj2(char * string1, char ** string2){
    //size_t size = (char*)malloc(strlen(string1) + 1);
    const int size = strlen(string1);
    char tableStr1[size];

    strcpy(tableStr1, string1);
    char * wsk = tableStr1;
    string2[0] = wsk;
    puts(string2[0]);

}
//4.2.10,
int ** function1(unsigned int n, int tab[n]){
    int maxValue = tab[0];
    int minValue = tab[0];
    int absoluteValue = tab[0];
    int indexMin, indexMax, indexAbsolute;
    //int length = strlen(tab);
    int results[3][2];
    //int **results;
    for(int i = 0; i < n; i++){
        if(tab[i] >= maxValue){
            maxValue = tab[i];
            indexMax = i;
            results[0][0] = maxValue;
            results[0][1] = indexMax;
        }
    }

    for(int x = 0; x < n; x++){
        if(tab[x] <= minValue){
            minValue = tab[x];
            indexMin = x;
            results[1][0] = minValue;
            results[1][1] = indexMin;
        }
    }

    for(int z = 0; z < n; z++){
        if(tab[z] <= 0){
            absoluteValue = tab[z] * (-1);
            indexAbsolute = z;

        }else if(tab[z] <= absoluteValue){
            absoluteValue = tab[z];
            indexAbsolute = z;
        }
        results[2][0] = absoluteValue;
        results[2][1] = indexAbsolute;
    }
    return results;
}

//4.2.11

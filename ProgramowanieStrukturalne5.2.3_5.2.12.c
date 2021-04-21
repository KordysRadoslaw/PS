#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int porownajV1(char[], char[]);
int porownajV2(char *, char *);
int porownajV3(wchar_t *, wchar_t *);
int example5_2_4(char *, char *);

int main()
{
    /*
    char table1[10] = "aaa";
    char table2[10] = "aab";
    char *point1 = table1;
    char *point2 = table2;
    printf("%d\n", porownajV1(table1, table2));
    printf("%d\n", porownajV2(point1, point2));
    printf("%d\n", porownajV3(point1, point2));
    printf("%d\n", example5_2_4(point1, point2));

    char tableString[20] = "zadanie 5.2.5";
    char *strings[30];
    size_t count = 0;
    strings[count] = (char*)malloc(strlen(tableString + 1));
    przepisz(strings, tableString);
    puts(strings);
    */


    /*
    wchar_t tableY[20] = "asddsa";
    wchar_t *stringsY;
    size_t countY = 0;
    stringsY[count] = (char*)malloc(strlen(tableY + 1));
    przepiszV2(stringsY, tableY);
    puts(stringsY);
    nie dziala, ogarnij wchar
    */

    /*
    //5.2.6
    char table1[10] = "asuw";
    char table2[10];
    kopiujn(table1, table2, 2);
    puts(table2);
    //teraz dla wchar
    */
    //5.2.7
    /*
    char table1[10] = "Ala m";
    char table2[10] = "a kota";
    size_t size = 0;
    char table3[100];
    char *pointer1 = table1;
    //table3[size] = (char*)malloc(strlen(pointer1) * 2);
    //printf("%d", strlen(pointer1));
    sklej(table1, table2, table3);
    puts(table3);
    */
    //5.3.8
    /*
    char table[20] = "hello";
    upper(table);
    //printf("%c\n", table[0]);
    //puts(table);
    */
    //5.3.9
    /*
    char table[20] = "radoslaw kordys";
    char * result = wytnij(table, 2, 5);
    puts(result);
    */
    //5.2.10
    //char table[20] = "xyzqwerty";
    //char table2[20] = "zqw";
    //char * pon = table;
    //if(strcmp(pon + 1, table2) == 0){
       // printf("asd");
   // }else{
    //    printf("sss");
   // }
    //wytnij2(table, table2);

    //5.2.12
    char table[20] = "xyzqwerty3";
    char table2[20] = "zqwpooiub4";
    char * pointer1 = table;
    char * pointer2 = table2;
    wytnijzn(pointer1, pointer2);


}
//5.2.3
int porownajV1(char string1[], char string2[]){
    if(strcmp(string1, string2) == 0){
        return 1;
    }else{
        return 0;
    }
}

int porownajV2(char * string1, char * string2){
    if(strcmp(string1, string2) == 0){
        return 1;
    }else{
        return 0;
    }
}

int porownajV3(wchar_t * string1,wchar_t * string2){
    if(strcmp(string1, string2) == 0){
        return 1;
    }else{
        return 0;
    }

}
//5.2.4
int example5_2_4(char * string1, char * string2){
    if(strcmp(string1, string2) < 0){
        return 1;
    }else{
        return 0;
    }

}
//5.2.5
void przepisz(char *string1, char string2[]){
    strcpy(string1, string2);

}
void przepiszV2(wchar_t *string1, wchar_t string2[]){
    strcpy(string1, string2);

}
//5.2.6
void kopiujn(char table1[], char table2[], int lenght){
    if(strlen(table1) < lenght){
        strncpy(table2, table1, strlen(table1));
    }else{
        strncpy(table2, table1, lenght);
    }


}
void sklej(char table1[], char table2[], char table3[]){
    printf("aa");
    strcat(table3, table1);
    strcat(table3, table2);
}

void upper(int table[]){
    strupr(table);
    printf("%s", table);

}
void wytnij(char table[], int n, int m){
    char newTable[20];
    char * pointerFir = table;
    char * pointerSec = table + m;
    strncpy(newTable, pointerFir, n);
    strcat(newTable, pointerSec);
    puts(newTable);


}
//5.2.10 i 5.2.11
void wytnij2(char nap1[], char nap2[]){
    char newTable[10];
    int sizeTab1 = strlen(nap1);
    int sizeTab2 = strlen(nap2);
    int counter = 0;
    int i;
    char * pointer1 = nap1;
    char * pointer2 = nap2;

    for(i = 0; i < sizeTab1; i++){
        if(pointer1[i] == pointer2[counter]){
            counter++;
        }else{
            counter = 0;
        }

        if(counter == sizeTab2){
            strncpy(newTable, pointer1, i);
            strcat(newTable, pointer1 + i + counter);
            break;
        }

    }

    puts(newTable);
}
//5.2.12
void wytnijzn(char * str1, char * str2){
    int size = strlen(str1);
    char newTable[10];
    char * pointer1;
    char * pointer2;
    for(int i = 0; i < size; i++){

            for(int j = 0; j < size; j++){

                pointer1 = &str1[i];
                pointer2 = &str2[i];
                if(strcmp(pointer1, pointer2) == 0){
                    strcpy(newTable, pointer1);
                }
            }


    }
    puts(newTable);

}

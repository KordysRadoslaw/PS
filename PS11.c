#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int zawiera(char, char[]);
char functionForExample6(char[], char[], int);
char * functionForExample8(char *);
char * functionForExample9(char *);
int pierwiastek(int);

int main()
{
    //zadanie1();
    //zadanie2();
    //zadanie3();
    //zadanie4();
    //zadanie5();
    //zadanie6();
    //zadanie7();
    //zadanie8();
    //zadanie9();
    //zadanie10();
    //zadanie11();

    //zadanie1_3_3();
    //zadanie1_3_7();
    //zadanie1_3_9();
    zadanie1_4_5();

    return 0;
}
void zadanie1(){
    functionForExample1();
}
void zadanie2(){
    functionForExample2();
}
void zadanie3(){
    functionForExample3();
}
void zadanie4(){
    functionForExample4();

}
void zadanie5(){
    char words[81];
    char sign;
    char * tekst = "Zadanie nr 5\nWprowadz dane";
    char * wanted = "Wprowadz szukany znak";
    puts(tekst);
    gets(words);
    puts(wanted);
    scanf("%c", &sign);
    zawiera(sign, words);



}
void zadanie6(){
    char wordsFrom[70];
    char wordsTarget[100];
    puts("Zadanie nr 6");
    puts("Wprowadz dane ktore chcesz skopiowac");
    gets(wordsFrom);
    char * wsk = functionForExample6(wordsFrom, wordsTarget, 5);
    puts(wordsTarget);

}
void zadanie7(){
    puts("zadanie nr 7");
    char table1[81];
    char table2[81];

    puts("Zadanie nr 7\nWprowadz dane pierwszego znacznika");
    char * wsk1 = gets(table1);
    puts("wprowadz dane drugiego znacznika");
    char * wsk2 = gets(table2);

    zawiera_lan(wsk1, wsk2);

}
void zadanie8(){
    puts("zadanie nr 8");
    char table1[81];
    puts("Wprowadz dane ktore chcesz, zebym skopiowal");
    char * pointer = gets(table1);

    puts(functionForExample8(pointer));
    //puts(table1);
    puts("koniec zadania");

}
void zadanie9(){
    puts("zadanie nr 9");
    char table1[81];
    char * pointer;
    while(gets(table1) && table1[0] != '\0'){
        pointer = table1;
        puts(functionForExample9(pointer));
        puts("Wprowadz kolejne dane, lub zakoncz program");

    }
    puts("wykrylem pusta linie, koncze dzialanie");

}

void zadanie10(){
    puts("Zadanie 10\npodaj maksymalnie 10 wierszy");
    char strings[10][81];
    char * pointer[10];
    int counter = 0;
    int k;
    int menu;
    while(gets(strings[counter]) != NULL && counter < 9){
        pointer[counter] = strings[counter];
        counter++;
    }
    puts("1 - wyswietlenie pierwotnego lancucha\n2 - sortowanie po ASCII\n3 - kolejnosc rosnaca\n4 - wg pierwszego slowa\n5 - koniec");

    while(scanf("%d", &menu) != 5){
        switch(menu){
            case 1:
                puts("opcja 1");
                for(int i = 0; i < 10; i++){
                    puts(strings[i]);
                }
                break;
            case 2:
                puts("opcja nr 2");
                break;
            case 3:
                sortOfStrings(pointer, counter);
                puts("posortowana lista");
                for(k = 0; k < counter; k++){
                    puts(pointer[k]);

                }
                break;
            case 4:
                puts("opcja nr 4");
                sortOfLenght(pointer, counter);
                puts("posortowana lista");
                for(k = 0; k < counter; k++){
                    puts(pointer[k]);
                }

                break;
            case 5:
                puts("koniec programu");
                break;
            default:
                puts("wybierz ponownie");
                break;
        }
    }
}

void zadanie11(){
    puts("Zadanie nr 11\nWprowadz dane");
    char tableOfString[81];
    int words = 0;
    int lowerCase = 0;
    int upperCase = 0;
    int spaces = 0;
    int numbers = 0;
    int word = 0;

    while(scanf("%s", tableOfString) != EOF){
        int size = strlen(tableOfString);

        for(int i = 0; i < size; i++){
            if(tableOfString[i] == ' '){
                if(isalnum(tableOfString[i + 1]) != 0){
                    words++;
                }

        }else if(isalnum(tableOfString[i]) != 0){
            word++;
        }else if(isspace(tableOfString[i] != 0)){
            spaces++;
        }else if(islower(tableOfString[i] != 0)){
            lowerCase++;
        }else if(isupper(tableOfString[i]) != 0){
            upperCase++;
        }else if(isdigit(tableOfString[i]) != 0){
            numbers++;
        }
    }

    }
    printf("ilosc liter: %d, slowa: %d, male: %d, duze: %d, cyfry: %d, spacje: %d", word, words, lowerCase, upperCase, numbers, spaces);

}
void zadanie12(){
    puts("Zadanie nr 12");



}
void zadanie13(){

}
void zadanie14(){

}
void zadanie15(){

}
void zadanie1_3_3(){
    puts("zadanie 1.3.3\n");
    int a,b,c;
    puts("Podaj pierwsza cyfre");
    scanf("%d", &a);
    puts("Podaj druga cyfre");
    scanf("%d", &b);
    puts("Podaj trzecia cyfre");
    scanf("%d", &c);
    int result;
    if(a > b && a > c){
        result = a;
    }else if(b > a && b > c){
        result = b;
    }else{
        result = c;
    }
    printf("Najwieksza podana cyfra to: %d", result);

}

void zadanie1_3_7(){
    puts("Zadanie 1.3.7");
    puts("podaj liczbe");
    int number;
    int square;
    scanf("%d", &number);
    if(number == 0){
        printf("rownanie kwadratowe ma jedno rozwiazanie: x = %d\n", number);

    }else if(number > 0){
        printf("rownanie kwadratowe ma dwa rozwiazania %d oraz -%d", pierwiastek(number), pierwiastek(number));
    }else{
        puts("Nie ma rozwiazañ");
    }

}
void zadanie1_3_9(){
    puts("Zadanie 1.3.9");
    int a, b, result;
    char operation;
    printf("wybierz operacje matematycza: + - * /\n");
    scanf("%c", &operation);
    puts("Podaj pierwsza cyfre");
    scanf("%d", &a);
    puts("Podaj druga cyfre");
    scanf("%d", &b);

    switch(operation){
        case '+':
            result = a + b;
            printf("%d", result);
            break;
        case '-':
            result = a - b;
            printf("%d", result);
            break;
        case '*':
            result = a * b;
            printf("%d", result);
            break;
        case '/':
            result = a / b;
            printf("%d", result);
            break;
    }

}
void zadanie1_4_5(){
    printf("Zadanie 1.4.5\nWprowadz liczbe calkowita\n");
    int number, secondNumber;
    scanf("%d", &number);

    while(number < 0){
        printf("wprowadz liczbe dodatnia\n");
        scanf("%d", &number);
    }
    for(int i = 0; i < number; i++){
        secondNumber = i * i;
        printf("%d ", secondNumber);
        if(i + 1 < number){
                printf("+ ");

        }

    }
    printf("\n");
}

void functionForExample1(){
    char words[81];
    char * tekst = "Zadanie nr 1\nWprowadz dane, pobiore je oraz wyswietle";
    puts(tekst);
    gets(words);
    puts("Sprawdzmy jakie dane pobralem");
    puts(words);

}
void functionForExample2(){
    char words[81];
    int n;
    char * tekst = "Zadanie nr 2\nWprowadz dane, pobiore je, ale przestane czytac w kilku przypadkach";

    puts(tekst);
    char * wsk = gets(words);
    puts("do ilu znakow mam pobrac?");
    scanf("%d", &n);

        while(wsk != '\0'){
            for(int i = 0; i < n; i++){
                if(wsk[i] == ' '){
                    puts("\nwykryto spacje, koncze dzialanie");
                    break;
                }else if(wsk[i] == '\n'){
                    puts("\nwykryto nowa linie, koncze dzialanie");
                    break;
                }else if(wsk[i] == '\t'){
                    puts("\nwykryto tabulator, koncze dzialanie");
                    break;
                }
                putchar(*(wsk+i));

            }
            puts("koniec tablicy");
            break;
        }
}
void functionForExample3(){
    char words[81];
    char * tekst = "Zadanie nr 3\nWprowadz dane";
    puts(tekst);
    scanf("%s", words);
    puts(words);
}

void functionForExample4(){
    char words[81];
    char sign;
    char * tekst = "Zadanie nr 4\nWprowadz lancuch znakow";
    puts(tekst);
    gets(words);
    puts("Jaki mam znalezc znak w tych danych? Zwroce Ci wskaznik");
    scanf("%c", &sign);
    for(char * wsk = strchr(words, sign); wsk != NULL; wsk = strchr(wsk + 1, sign)){
        printf("szukany znak zostal znaleziony na pozycji %d\n", wsk + 1 - words);
    }
}
int zawiera(char sign, char words[]){
    int result = 0;
    for(char * wsk = strchr(words, sign); wsk != NULL; wsk = strchr(wsk + 1, sign)){
        if(wsk != NULL){
            puts("prawda");
            result = 1;
            break;
        }
    }
    printf("%d\n", result);
    return result;
}
char functionForExample6(char from[], char target[], int size){
    int counter = 0;
    while(counter < size && from[counter] != NULL){
            target[counter] = from[counter];
            counter++;
    }
    puts("dane zostaly skopiowane");
    return target;
}

void zawiera_lan(char * wsk1, char * wsk2){
    int y;
    int valPointer = 0;
    for(int i = 0; i < 10; i++){

        if(strcmp(wsk1 + i, wsk2) == 0){
            printf("wykryto podobienstwo na pozycji nr %d!\n", i+1);
            y = i;
            valPointer = 1;
            break;
        }else{

        }
    }
    if(valPointer == 0){
        puts(NULL);
        puts("0");
    }else if(valPointer == 1){
        printf("Adres podobienstwa danych lancuchow to %p\n", &wsk1 + y);
    }
}

char * functionForExample8(char * wsk){

    int size = strlen(wsk);
    char newWsk[size];
    for(int i = 0; i < size; i++){
        newWsk[i] = wsk[size - (i + 1)];
        puts("dokonalem wrzucania do innego wskaznika");
    }
    newWsk[size] = '\0';
    strcpy(wsk, newWsk);
    puts("skopiowano do tego samego wskaznika");

    return wsk;

}

char * functionForExample9(char * pointer){
    int size = strlen(pointer);
    int spaces = 0;
    int sizeOfSecTab;
    int counter = 0;
    for(int i = 0; i < size; i++){
        if(pointer[i] == ' '){
            spaces++;
        }
    }
    sizeOfSecTab = size - spaces;
    char secondTable[sizeOfSecTab];

    for(int i = 0, counter = 0; i < size; i++){
        if(pointer[i] != ' '){
            secondTable[counter] = pointer[i];
            counter++;
        }else if(pointer[i] == ' '){
            puts("wykrylem spacje");
        }
    }
    puts(secondTable);
    //lub strcat
    return secondTable;

}
void sortOfStrings(char * strings[], int num){
    char * pointer;
    int dol, szuk;

    for(dol = 0; dol < num - 1; dol++){
        for(szuk = dol + 1; szuk < num; szuk++){
            if(strcmp(strings[dol], strings[szuk]) > 0){
                pointer = strings[dol];
                strings[dol] = strings[szuk];
                strings[szuk] = pointer;
            }
        }
    }
}
void sortOfLenght(char * strings[], int num){
    char * pointer;
    int dol, szuk, counter1, counter2;

    for(dol = 0; dol < num - 1; dol++){
        for(szuk = dol + 1; szuk < num; szuk++){
                if(strings[dol][dol] != ' '){
                    counter1++;
                }
                if(strings[szuk][dol] != ' '){
                   counter2++;
                   }

            if(counter1 > counter2){
                pointer = strings[dol];
                strings[dol] = strings[szuk];
                strings[szuk] = pointer;
            }
        }
    }
}
int pierwiastek(int number){
    int result = sqrt(number);

    return result;
}


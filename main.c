#include <stdio.h>
#include <string.h>
#include "structures.c"
#define LEN_MONTH 20
#define LEN_SHORTCUT 3
#define SIZE 12
#define MAXTIT 40
#define MAXAUT 40
#define MAXSIZE 100

struct strMonths tabelOfStruct[SIZE] = {
        "styczen", "sty", 31, 1,
        "luty", "lut", 28, 2,
        "marzec", "mar", 31, 3,
        "kwiecien", "kwi", 30, 4,
        "maj", "maj", 31, 5,
        "czerwiec", "cze", 30, 6,
        "lipiec", "lip", 31, 7,
        "sierpien", "sie", 31, 8,
        "wrzesien", "wrz", 30, 9,
        "pazdziernik", "paz", 31, 10,
        "listopad", "lis", 30, 11,
        "grudzien", "gru", 31, 12
};
struct strBook {
    char title[MAXTIT];
    char author[MAXAUT];
    float price;
};
struct strPersonalData{
    char name[20];
    char secondName[20];
    char surname[20];
};

struct strPesel{
    struct strPersonalData datas;
    long int pesel;
};

int main()
{
    //zadanie1();
    //zadanie2();
    //zadanie3();
    zadanie4();


    return 0;
}
void zadanie1(){
    //functionForExample1(5);
    functionForExample1("luty");
}

void zadanie2(){
    char month[20];
    char wsk;
    int day;
    char * text = "Wprowadz nazwe miesiaca lub jego skrot";
    puts(text);
    gets(month);
    wsk = month;
    puts("teraz numer dnia");
    scanf("%d", &day);
    functionForExample2(month, day);

}

void zadanie3(){
    struct strBook book[MAXSIZE];
    int counter = 0;
    char quickTitle[100];
    printf("Podaj tytul ksaizki, lub wprowadz enter, aby zakonczyc dzialanie\n");
    while(counter < MAXSIZE && gets(book[counter].title) != NULL && book[counter].title[0] != '\0'){
            printf("podaj autora\n");
            gets(book[counter].author);
            printf("podaj cene\n");
            scanf("%f", &book[counter++].price);
            while(getchar() != '\n'){
                continue;
            }
            if(counter < MAXSIZE){
                printf("podaj kolejny tytul\n");
            }
    }

    for(int i = 0; i < counter; i++){
        for(int j = i + 1; j < counter; j++){
            if(strcmp(book[i].title, book[j].title) > 0){
                strcpy(quickTitle, book[i].title);
                strcpy(book[i].title, book[j].title);
                strcpy(book[j].title, quickTitle);

            }
        }
    }
    printf("O to lista ksiazek w porzadku alfabetycznym");
    for(int i = 0; i < counter; i++){
            puts(book[i].title);
    }

}
void zadanie4(){
    struct strPesel data[3] = {
    "Michael", "Jeffrey", "Jordan", 87010201896,
    "Tom", "Andrey", "Godrick", 43876378781,
    "Ernest", "", "Hemingway", 73850206583,
    };
    functionForExample4(data);


}

void functionForExample0(int numberOfMonth){
    int sum = 0;

    for(int i = 0; i <= numberOfMonth; i++){
        sum += tabelOfStruct[i].daysMonth;
    }
    printf("suma dni do miesiaca %s to %d\n", tabelOfStruct[numberOfMonth].month, sum);

}
void functionForExample1(char * month){
    int sum = 0;
    int counter = 0;

    while(strcmp(month, tabelOfStruct[counter].month) != 0) {
            counter++;
    }
    for(int i = 0; i <= counter; i++){
        sum += tabelOfStruct[i].daysMonth;
    }
    printf("wybrany miesiac to %s, liczba dni to: %d\n", tabelOfStruct[counter]. month, sum);

}
void functionForExample2(char * month, int day){
    int sum = 0;
    int counter = 0;

    while(strcmp(month, tabelOfStruct[counter].month) != 0 && strcmp(month, tabelOfStruct[counter].shortcut)){
          counter++;
          }
    for(int i = 0; i <= counter; i++){
        sum += tabelOfStruct[i].daysMonth;


    }
    int days = tabelOfStruct[counter].daysMonth - day;
    sum -= days;
    printf("suma dni: %d", sum);

}
void functionForExample4(struct strPesel variable[]){
    for(int i = 0; i < 3; i++){
        if(variable[i].datas.secondName[0] == '\0'){
            printf("%s, %s -- %ld\n", variable[i].datas.name, variable[i].datas.surname, variable[i].pesel);

        }else{
            printf("%s, %s %c. -- %ld\n", variable[i].datas.name, variable[i].datas.surname, variable[i].datas.secondName[0], variable[i].pesel);

        }
    }

}

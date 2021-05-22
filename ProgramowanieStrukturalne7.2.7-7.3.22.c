#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
#include <string.h>

enum zwierzak{pies, kot};

typedef enum{
    connect,
    connected,
    notConnected
}internetStatus;

struct zespolone1{
    double im;
    double re;
};
struct zespolone2{
    double complex im;
    double complex re;
};
struct student{
    char imie[20];
    char nazwisko[20];
    char adres[100];
    long int pesel;
    char kierunek[20];
    int nrLegitymacji;

};


struct komputer{

    internetStatus key;
    char IP[20];
    char owner[20];
};


int main()
{
    //double complex z1 = 1.0 + 3.0 * I;
    //double complex z2 = 1.0 - 4.0 * I;
     //dodaj(z1, z2);
    struct zespolone1 a;
    struct zespolone1 b;
    a.re = 2.0;
    a.im = 7.0;
    b.re = 2.0;
    b.im = 3.0;
    dodaj(a, b);

    //struct student stu;
    //struct student *wsk = &stu;
    //writeStudent(wsk);

    //7.2.7, 7.2.8, 7.2.15, 7.2.16, 7.3.21, 7.3.22
    struct komputer komp;
    showComputer(komp);
    return 0;
}
void dodaj(struct zespolone2 a, struct zespolone2 b){

    double complex a1 = a.re + a.im * I;
    double complex b1 = b.re + b.im * I;
    double complex result = a1 + b1;

    //printf("%.2f", result);
}
void writeStudent(struct student * wsk){
    scanf("%s", &wsk->imie);
    scanf("%s", &wsk->nazwisko);
    scanf("%s", &wsk->adres);
    scanf("%ld", &wsk->pesel);
    scanf("%ld", &wsk->kierunek);
    scanf("%d", &wsk->nrLegitymacji);
    //printf("%s", wsk->imie);
}
void showComputer(struct komputer ko){

    //tylko do printa
    const char* typeConnect[] = {"connect", "connected", "notConnected"};

    ko.key = connected;
    strcpy(ko.IP, "192.0.1.0.1.000");
    strcpy(ko.owner, "Wlasciciel to ja");

    printf("Owner: %s\n", ko.owner);
    printf("IP: %s\n", ko.IP);
    printf("stutus: %s\n", typeConnect[ko.key]);
    //puts(typeConnect[ko.key]);
}


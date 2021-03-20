#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ONE 3
#define TWO 2

double functionFor2_2_5(int);
double functionFor2_2_6(unsigned int, unsigned int);
int functionFor3_2_5(int *, int *);
double * functionFor3_2_10();
int functionFor2_2_21(unsigned int);


int main()
{
    //exercise2_2_5();
    //exercise2_2_6();
    exercise2_2_21();
    //exercise2_2_33();
    //exercise3_2_4();
    //exercise3_2_5();
    //exercise3_2_6();
    //exercise3_2_10();
    return 0;
}
void exercise2_2_5(){
    int power;
    printf("wprowadz potege: \n");
    scanf("%d", &power);
    printf("Wynikiem jest liczba: %.f\n", functionFor2_2_5(power));

}
void exercise2_2_6(){
    unsigned int number, power;
    printf("wprowadz liczbe: \n");
    scanf("%d", &number);
    printf("do jakiej potegi: \n");
    scanf("%d", &power);
    printf("Wynikiem jest liczba: %.f\n", functionFor2_2_6(number, power));

}
void exercise2_2_21(){
    int number;
    printf("Wprowadz liczbe\n");
    scanf("%d", &number);
    int result = functionFor2_2_21(number);
    printf("\"n\" wyraz ciagu jest rowny %d", result);
}
void exercise2_2_33(){
    unsigned int a = 1;
    unsigned int b = 2;
    unsigned int c = 3;
    unsigned int d = 4;
    unsigned int e = 5;
    functionFor2_2_33(a, b, c, d, e);

}
void exercise3_2_4(){
    int * pointer1 = ONE;
    int * pointer2 = TWO;
    functionFor3_2_4(pointer1, pointer2);

}
void exercise3_2_5(){
    int * pointer1 = ONE;
    int * pointer2 = TWO;
    int result = functionFor3_2_5(pointer1, pointer2);
    printf("wynik to: %d", result);

}
void exercise3_2_6(){
    int a = 10;
    int b = 5;
    int * wsk;
    wsk = &a;
    printf("wartosc b: %d, wartosc a %d\n", b, *wsk);
    functionFor3_2_6(b, wsk);
    printf("wartosc b: %d, wartosc a %d\n", b, *wsk);

}
void exercise3_2_10(){
    double * value = functionFor3_2_10();
    printf("adres waskaznika %d", *value);

}
double functionFor2_2_5(int power){
    double sum = pow(2, power);
    return sum;
}
double functionFor2_2_6(unsigned int n, unsigned int m){
    double sum = pow(n, m);
    return sum;

}
int functionFor2_2_21(unsigned int n){
    int a0 = 1;
    int an;
    if(n > 0){

        an = (2 * functionFor2_2_21(n-1)) + 5;
        return an;
    }else{
        return 0;
    }

}

void functionFor2_2_33(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e){
    int tableInt[5] = {a, b, c, d, e};
    int sum = 0;
    int counter = 5;

    while(counter > 1){
        for(int i = 0; i < counter; i++){
                sum += tableInt[i];

        }
        printf("suma %d argumentow: %d\n", counter, sum);
        counter--;
        sum = 0;
    }

}
void functionFor3_2_4(int * first, int * second){
    int a = first;
    int b = second;
    int sum = 0;
    int temp;
    if(b < a){
        temp = b;
        b = a;
        a = temp;
    }
    printf("liczba pierwsza ma wartosc %d, a druga %d", a, b);
}

int functionFor3_2_5(int * first, int * second){
    int a = first;
    int b = second;
    int sum = a + b;
    return sum;
}
void functionFor3_2_6(int n, int * w){
    *w = n;

}
double * functionFor3_2_10(){
    double variable;
    double * wsk;
    wsk = &variable;
    return wsk;
}


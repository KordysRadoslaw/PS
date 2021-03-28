#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
    //Example4_2_6();
    //Example4_2_7();
    //Example4_2_8();
    Example4_2_9();
    return 0;
}
void Example4_2_6(){

    int table1[SIZE] = {1, 2, 3, 4, 5};
    int table2[SIZE];

    functionForExample4_2_6(SIZE, table1, table2);



}
void Example4_2_7(){

    int table1[SIZE] = {1, 2, 3, 4, 5};
    int table2[SIZE] = {5, 2, 4, 6, 9};
    int table3[SIZE];

    functionForExample4_2_7(SIZE, table1, table2, table3);

}
void Example4_2_8(){

    int table1[SIZE] = {1, 2, 3, 4, 5};
    int table2[SIZE] = {5, 2, 4, 6, 9};
    int table3[SIZE * 2];

    functionForExample4_2_8(SIZE, table1, table2, table3);

}
void Example4_2_9(){
    int table1[SIZE] = {1, 2, 3, 4, 5};
    int table2[SIZE] = {5, 2, 4, 6, 9};
    int table3[SIZE] = {6, 18, 5, 7, 2};
    int *wsk1 = table1;
    int *wsk2 = table2;
    int *wsk3 = table3;
    functionForExample4_2_9(SIZE, wsk1, wsk2, wsk3);

}
void functionForExample4_2_6(unsigned n, int tab1[], int tab2[]){
    //punkt a
    int number;
    for(int i = 0; i < n ; i++){
        number = tab1[i];
        tab2[i] = number;
    }
    for(int i = 0; i < n; i++){
        printf("wartoscci nowej tablicy %d\n", tab2[i]);
    }
    //punkt b
    for(int i = 0; i < n; i++){
        number = tab1[n - i - 1];
        tab2[i] = number;

    }
    printf("odwrocona kolejnosc\n");
    for(int i = 0; i < n; i++){
        printf("%d\n", tab2[i]);
    }

}
void functionForExample4_2_7(unsigned n, int tab1[], int tab2[], int tab3[]){
    //punkt a
    int sum = 0;
    int number;
    for(int i = 0; i < n; i++){
        sum = tab1[i] + tab2[i];
        tab3[i] = sum;
    }
    printf("punkt A\n");
    for(int i = 0; i < n; i++){
        printf("%d\n", tab3[i]);
    }
    //punkt b
    printf("punkt B\n");
    for(int i = 0; i < n; i++){
        if(tab1[i] >= tab2[i]){
            tab3[i] = tab1[i];
        }else{
            tab3[i] = tab2[i];
        }
        printf("%d\n", tab3[i]);
    }
    //punkt c
    printf("punkt C\n");
    for(int i = 0; i < n; i++){
        number = tab1[i];
        tab2[i] = number;
        number = tab2[i];
        tab3[i] = number;
        printf("%d\n", tab3[i]);

    }

}
void functionForExample4_2_8(unsigned n, int tab1[], int tab2[], int tab3[n*2]){
    int counter = 0;

    for(int i = 0; i < n; i++){
        tab3[i] = tab1[i];
        counter++;
    }
    for(int i = 0; i < n; i++){
        tab3[i + counter] = tab2[i];
    }
    printf("piunkt A\n");
    for(int i = 0; i < 2 * n; i++){
        printf("%d\n", tab3[i]);
    }
    printf("punkt B\n");
    for(int i = 0; i > n * 2; i++){
        int counter1 = 0;
        int counter2 = 0;
        if(i % 2 == 0){
            tab3[i] = tab1[counter1];
            counter1++;
        }else{
            tab3[i] = tab2[counter2];
            counter2++;
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d\n", tab3[i]);
    }
}
void functionForExample4_2_9(unsigned n, int *wsk1, int *wsk2, int *wsk3){
    //punkt a
    for(int i = 0; i < n; i++){
        if(*(wsk2 + i) >= *(wsk3 + i) && *(wsk2 + i) >= *(wsk1 + i)){
            *(wsk1 + i) = *(wsk2 + i);

        }else if(*(wsk3 + i) >= *(wsk2 + i) && *(wsk3 + i) >= *(wsk1 + i)){
            *(wsk1 + i) = *(wsk3 + i);

        }

    }

    //punkt b
    for(int i = 0; i < n; i++){
        if(*(wsk1 + i) > *(wsk3 + i) && *(wsk1 + i) < *(wsk2 + i)){
                *(wsk2 + i) = *(wsk1 + i);

        }else if(*(wsk3 + i) > *(wsk1 + i) && *(wsk3 + i) < *(wsk2 + i)){
            *(wsk2 + i) = *(wsk3 + i);

        }
    }
    //punkt c
    for(int i = 0; i < n; i++){
         if(*(wsk2 + i) <= *(wsk3 + i) && *(wsk2 + i) <= *(wsk1 + i)){
            *(wsk1 + i) = *(wsk2 + i);

        }else if(*(wsk3 + i) <= *(wsk2 + i) && *(wsk3 + i) <= *(wsk1 + i)){
            *(wsk1 + i) = *(wsk3 + i);

        }
    }

}



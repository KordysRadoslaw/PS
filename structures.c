#include <stdio.h>
#include <stdlib.h>
#define LEN_MONTH 20
#define LEN_SHORTCUT 3
#define SIZE 12
 //struktura
struct strMonths{
    char month[LEN_MONTH];
    char shortcut[LEN_SHORTCUT];
    int daysMonth;
    int numMonth;
};

struct strMonths table1[SIZE];

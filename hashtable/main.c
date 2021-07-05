#include <stdio.h>


#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main() {
    FILE *f;
    f = fopen("data.txt", "r");
    int i, numberFamily,ph_Number;char* p_name;
    p_name=(char *) calloc(15, sizeof(char));
    int m = 5;
    HANGER *T;
    T = (HANGER *) (calloc(m, sizeof(HANGER)));
    for (i = 0; i < m; i++) {
        T[i].phone_number = -1;
    }
    for (i = 0; i < m; i++) {
        T[i].name = (char *) calloc(15, sizeof(char));
    }

    fscanf(f, "%i", &numberFamily);
    for (i = 0; i < numberFamily; i++) {
        fscanf(f, "%i", &ph_Number);
        fscanf(f, "%s", p_name);
        insert(ph_Number,p_name, T, m);
    }


    for (i = 0; i < m; i++) {
        if (T[i].phone_number!=-1) printf("%i fogason 0%d %s\n", i,T[i].phone_number, T[i].name);
    }

    printf("\nKereses: a 742445623 telefonszamu szemely kabatja a ");
    printf("%i fogason van es a neve ", search(742445623, T, 5));
    printf("%s ", T[search(742445623, T, 5)].name);
    delete(742445623, T, 5);
    printf("\n");
    for (i = 0; i < m; i++) {
        if (T[i].phone_number!=-1)printf("%i fogason 0%d %s\n", i,T[i].phone_number, T[i].name);
    }


    return 0;
}


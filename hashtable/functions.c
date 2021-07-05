//
// Created by Erika on 2021. 05. 08..
//

#include "functions.h"
#include<stdio.h>      //hasito tablazat


void insert(int k,char* p_name, HANGER *T, int m)       // k kulcsu elemet beszur
{
    int j,i=0;

    do
    {
        j=(k+i) % m;
        if (T[j].phone_number==-1)
        {
            T[j].phone_number=k;
            strcpy(T[j].name,p_name);
            return;
        }
        else i++;
    }
    while (i!=m);
    printf( "tulcsodulas\n");
    return;
}

int search(int k, HANGER *T, int m)       //k kulcsu elemet keres
{
    int j,i=0;

    do
    {
        j=(k+i) % m;
        if (T[j].phone_number==k)
            return j;   // visszaadja a megtalalt elem indexet
        else i++;
    }
    while ((T[j].phone_number!=-1) && (i!=m));
    return -1;   // ha nincs benne a keresett elem
}
void delete(int k, HANGER *T, int m)       //k kulcsu elemet keres
{
    int j,i=0;

    do
    {
        j=(k+i) % m;
        if (T[j].phone_number==k)
        { T[j].phone_number=-1;strcpy(T[j].name,""); break; } // visszaadja a megtalalt elem indexet
        else i++;
    }
    while ((T[j].phone_number!=-1) && (i!=m));
    //if (i!=m) printf("hianyzo elem");
      // ha nincs benne a keresett elem
}



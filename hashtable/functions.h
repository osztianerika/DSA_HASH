//
// Created by Erika on 2021. 05. 08..
//
#include <string.h>

#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
typedef struct HANGER
{
    int phone_number;
    char* name;
}HANGER;

int search(int, HANGER *, int);
void insert(int,char*, HANGER *, int);
void delete(int, HANGER *, int);


#endif //HASHTABLE_FUNCTIONS_H

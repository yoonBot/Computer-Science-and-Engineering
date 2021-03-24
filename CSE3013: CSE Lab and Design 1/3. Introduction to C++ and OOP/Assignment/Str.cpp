#include "Str.h"

Str::Str(int len){
    str = new char[len + 1];    // dynamically allocate memory
    *str = '\0';    // pointer only saves address of first element anyways
}

Str::Str(char *neyong){
    str = new char[strlen(neyong) + 1];  // allocate enough space for neyong. +1 is for null character
    strcpy(str, neyong);  // copy neyong to str array
    *(str + strlen(neyong)) = '\0';  // set null char
}

Str::~Str(void){
    delete[] str;   // free memory
}

int Str::length(void){
    return len;
}

char *Str::contents(void){
    return str; // remind that strcpy(str, neyong) copied neyong to str
}

int Str::compare(Str &a){
    return (*this).compare(a); // current object is passed as parameter
}

int Str::compare(char *a){
    return strcmp(str, a);
}

int Str::operator(char *a){
    if (a == 0){    // if a is null, delete and remake a string
        len = 0;    
        delete[] str;
        str = new char[1];
        *str = '\0';
        return;
    }

    if (len < strlen(a)){
        delete[] str;
        str = new char[strlen(a) + 1]; // resize
    }

    len = strlen(a);
    strcpy(str, a);
    *(str + len) = '\0';
}

void Str::operator=(Str &a){
    (*this) = a.contents();
}


/*
    Version 1.0 : Astro-coder
*/
#include "main.h"

int main(void){
    short int nbLines = 0,noRepeat =0;
    short int *noRepeatTable;
    Line *lines = readFile(&nbLines,&noRepeat,&noRepeatTable);
    ItemSet itemsets[nbLines];
    itemsets[5].lines[0] = T;
    printf("%d",noRepeat);
}
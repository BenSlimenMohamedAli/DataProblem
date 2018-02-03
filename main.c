/*
    Version 1.0 : Astro-coder
*/
#include "main.h"

int main(void){
    short int nbLines = 0, noRepeat =0, *noRepeatTable, i, j;
    Line *lines = readFile(&nbLines,&noRepeat,&noRepeatTable);
    ItemSet itemset[noRepeat];
    for(i =0;i< noRepeat;i++){
        itemset[i].item = noRepeatTable[i];
        for(j=0;j<nbLines;j++){
            if(exist(noRepeatTable[i],lines[j].items,1000)){
                itemset[i].lines[j] = T;
            }else{
                itemset[i].lines[j] = F;
            }
        }
    }
    print(itemset,nbLines,noRepeat);
    
}
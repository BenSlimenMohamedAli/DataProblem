/*
    Version 1.0 : Astro-coder
*/
#include "main.h"

int main(void){
    int i,j;
    short int nbLines = 0,noRepeat =0;
    short int *noRepeatTable;
    Line *lines = readFile(&nbLines,&noRepeat,&noRepeatTable);
    ItemSet itemset[noRepeat];
    Bool t[nbLines];
    for(i =0;i< noRepeat;i++){
        itemset[i].item = noRepeatTable[i];

        printf("%d  || ",itemset[i].item);
        for(j=0;j<nbLines;j++){
            if(exist(noRepeatTable[i],lines[j].items,1000)){
                t[j] = T;
            }else{
                t[j] = F;
            }
            printf("%d ",t[j]);
        }
        printf("\n\n");
        itemset[i].lines = t;
        
    }
    
}
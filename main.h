#ifndef __MAIN__H__
#define __MAIN__H__
    /*
        Libraries definition
    */
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    /*
        Structs definition
    */ 
    typedef enum boolean{
        F =0,T=1
    }Bool;

    typedef struct line{
        short int items[1000];
    }Line;

    typedef struct itemSet{
        short int item;
        Bool *lines;
    }ItemSet;

    /*
        Functions
    */
    Line* readFile(short int *nbLines,short int *noRepeat, short int **noRepeatTable);
    int generateTable(ItemSet ** itemsets);
    Bool exist(short int number, short int *table, short int size);

#endif 
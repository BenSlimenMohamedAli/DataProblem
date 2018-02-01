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
        short items[1000];
    }Line;

    typedef struct itemSet{
        Bool lines[2];
    }ItemSet;

    /*
        Functions
    */
    Line* readFile(short int *nbLines,short int *noRepeat, short int **noRepeatTable);
    ItemSet *extractTable(int length,Line *lines);
#endif 
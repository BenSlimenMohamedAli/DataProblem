#ifndef __MAIN__C__
#define __MAIN__C__

    // The number of lines in the file
    short numLines = 0;
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
        F = 0,T = 1
    }Bool;

    typedef struct itemSet{
        short num;
        Bool linestate [32767];
    }ItemSet;
#endif
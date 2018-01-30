#ifndef __MAIN__C__
#define __MAIN__C__
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
        short items[100];
    }Line;

    typedef struct itemSet{
        Bool sets[32767];
    }ItemSet;
#endif
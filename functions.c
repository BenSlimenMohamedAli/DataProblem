#include "main.h"

/*
    Read the file lines
*/
Line* readFile(short int *nbLines,short int *noRepeat,short int **noRepeatTable){
    // define the items table
    static Line lines[32767]; // the table of strings
    short int i=0,j=0,number;
    char s[1000];
    char *token;

    // Opening the file
    FILE * f = fopen("file.txt", "r"); 
    while(fscanf(f,"%[^\n]",s) != EOF){
        // filling in the table
        (*nbLines)++;
        token = strtok(s," ");
        j =0;
        while( token != NULL ) {
            number = atoi(token);
            token = strtok(NULL," ");
            lines[i].items[j] = number;
            j++;
            (*noRepeat)++;
        }
        
        fseek(f,1,SEEK_CUR); // Move to the next line
        i++; // add 1 to the counter
    }
    fclose(f);  // closing the file
    return lines;
}

/*
    extract table


ItemSet *extractTable(int length,Line *lines){
    static ItemSet itemSets[10];
    return itemSets;
}*/

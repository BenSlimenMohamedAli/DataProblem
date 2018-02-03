#include "main.h"
/*
    Read the file lines
*/
Line* readFile(short int *nbLines,short int *noRepeat,short int **noRepeatTable){
    // define the items table
    static Line lines[32767]; // the table of strings
    short int i=0, j=0, number, table[32767];
    char s[10000], *token;

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
            if(exist(number,table,*noRepeat) == F){
                table[*noRepeat] = number;
                (*noRepeat)++;
            }
        }
        fseek(f,1,SEEK_CUR); // Move to the next line
        i++; // add 1 to the counter
    }
    (*noRepeatTable) = table;
    fclose(f);  // closing the file
    return lines;
}
/*
    Verify that an item exists or not
*/
Bool exist(short int number, short int *table,short int size){
    Bool existence = F;
    short int i;
    for(i=0;i<size;i++)
        if (table[i] == number)
            return T;
    return existence;
}

/*
    print the list of itemsets
*/

void print(ItemSet *itemset, short int nbLines, short int noRepeat){
    short int i,j;
    for(i=0;i<noRepeat;i++){
        printf("%d  || ",itemset[i].item);
        for(j=0;j<nbLines;j++){
            printf("%d ",itemset[i].lines[j]);
        }
        printf("\n\n"); 
    }
}

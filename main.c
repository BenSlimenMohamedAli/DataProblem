/*
    Version 1.0 : Astro-coder
*/
#include "main.h"

int main(void){
    // define the items table
    //ItemSet itemsTable[32767];
    int d,i=0;
    char s[100];
    // Opening the file
    FILE * f = fopen("file.txt", "r");
    while(fscanf(f,"%[^\n]",s) != EOF){
        printf("Done %s\n",s);
        // filling in the table



        fseek(f,1,SEEK_CUR); // Move to the next line
    }
    
    fclose(f);
}
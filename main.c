/*
    Version 1.0 : Astro-coder
*/
#include "main.h"

int main(void){
    // define the items table
    Line table[32767]; // the table of strings
    int i=0;
    char s[100];
    // Opening the file
    FILE * f = fopen("file.txt", "r");
    while(fscanf(f,"%[^\n]",s) != EOF){
        // filling in the table
        strcpy(table[i].items,s);
        fseek(f,1,SEEK_CUR); // Move to the next line
        i++; // add 1 to the counter
    }
    printf("%s",table[i-1].items);
    
    fclose(f);
}
/*
    Version 1.0 : Astro-coder
*/
#include "main.h"

int main(void){
    // define the items table
    Line lines[32767]; // the table of strings
    short int i=0,j=0,number;
    char s[100],s1[10];
    char *token;
    // Opening the file
    FILE * f = fopen("file.txt", "r");
    while(fscanf(f,"%[^\n]",s) != EOF){
        // filling in the table
        
        token = strtok(s," ");
        j =0;
        while( token != NULL ) {
            number = atoi(token);
            token = strtok(NULL," ");
            lines[i].items[j] = number;
            j++;
        }
        
        fseek(f,1,SEEK_CUR); // Move to the next line
        i++; // add 1 to the counter
    }
    fclose(f);  // closing the file
    /*

    */
}
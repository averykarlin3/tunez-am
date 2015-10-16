#ifndef LIBRARY_H
#define LIBRARY_H 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

node* add_song(node* table[], char n[], char a[]);
node* findlib_song(node* table[], char songn[]);
void print_let(node* table[], char c);
void print_art(node* table[], char artistn[]);


#endif

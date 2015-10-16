#ifndef LIBRARY_H
#define LIBRARY_H 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

node* table[26];

node* add_song(node* table[], char n[], char a[]);
node* findlib_song(node* table[], char songn[]);
void print_let(node* table[]);
void print_art(node* table[]);


#endif

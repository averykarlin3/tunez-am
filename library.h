#ifndef LIBRARY_H
#define LIBRARY_H 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

node* table[26];

void print_node(node* n);
node* add_song(node* table[], char n[], char a[]);
node* findlib_song(node* table[], char songn[]);

#endif

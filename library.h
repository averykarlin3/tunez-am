#ifndef LIBRARY_H
#define LIBRARY_H 1

#include "list.h"

node* add_song(node* table[], char n[], char a[]);
node* findlib_song(node* table[], char songn[]);
node* findlib_artist(node* table[], char artistn[]);
void print_let(node* table[], char c);
void print_art(node* table[], char artistn[]);
void print_lib(node* table[]);
void del_song(node* song, node* table[]);
void del_lib(node* table[]);
void shuffle(node* table[], int n);

#endif

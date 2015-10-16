#ifndef LIST_H
#define LIST_H 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
char name[256];
char artist[256];
struct node* next;
struct node* prev;
} node;

node* new_node(char n[], char a[]);
int list_len(node* lfront);
void print_list(node* lfront);
node* free_list(node* lfront);
node* insert_front(node *lfront, char n[], char a[]);
node* insert_lexic(node* lfront, char n[], char a[]);
node* randomn(node* lfront);
void rem(node* prev);
node* find_song(node* lfront, char songn[]);
node* find_artist(node* lfront, char artistn[]);

#endif

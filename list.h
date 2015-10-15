#ifndef LIST_H
#define LIST_H 1
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
char name[256];
char artist[256];
struct node* next;
} node;

node* table[26];

void print_list(node* lfront);
node* insert_front(node *lfront, int newData);
node* free_list(node* lfront);
#endif

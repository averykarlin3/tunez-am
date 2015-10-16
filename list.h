#ifndef LIST_H
#define LIST_H 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
char name[256];
char artist[256];
struct node* next;
} node;

void print_list(node* lfront);
node* insert_front(node *lfront, int newData);
node* free_list(node* lfront);
int list_len(node* lfront);
node* new_node(int newData);
node* insert_lexic(node* lfront, node* new);

#endif

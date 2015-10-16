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

node* new_node(char n[], char a[]);
void print_list(node* lfront);
int list_len(node* lfront);
node* insert_front(node *lfront, char n[], char a[]);
node* insert_lexic(node* lfront, char n[], char a[]);
node* free_list(node* lfront);

#endif

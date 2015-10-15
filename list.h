#ifndef LIST_H
#define LIST_H 1
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
int data;
struct node* next;
} node;

void print_list(node* lfront);
node* insert_front(node *lfront, int newData);
node* free_list(node* lfront);
#endif

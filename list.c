#include <stdio.h>
#include <stdlib.h>
#include "list.h"


void print_list(node* lfront) {
	if (lfront == NULL) {
		printf("\n");
		return;
	}
	while (lfront->next) {
		printf("%d, ", lfront->data);
		lfront = lfront->next;
	}
	printf("\n");
}

node* insert_front(node *lfront, int newData) {
	node *nfront = (node *)malloc(sizeof(node));
	nfront->data = newData;
	nfront->next = lfront;
	return nfront;
}

node* free_list(node* lfront) {
	while (lfront) {
		node* temp = lfront;
		lfront = lfront->next;
		free(temp);
	}
	return lfront;
}

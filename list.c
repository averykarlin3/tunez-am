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

int list_len(node* lfront) {
	int n = 0;
	while(lfront->next) {
		n++;
		lfront = lfront->next
	}
	return n+1;
}

node* insert_front(node *lfront, int newData) {
	node *nfront = (node *)malloc(sizeof(node));
	nfront->data = newData;
	nfront->next = lfront;
	return nfront;
}

node* new_node(int newData) {
	node* new = insert_front(0, newData);
	return new;
}

node* insert_lexic(node* lfront, node* new) {
	while(strcmp((lfront->next)->name, new->name) <= 0) {
		lfront = lfront->next;
	}
	new->next = lfront->next;
	lfront->next = new;
	return new;
}

node* free_list(node* lfront) {
	while (lfront) {
		node* temp = lfront;
		lfront = lfront->next;
		free(temp);
	}
	return lfront;
}

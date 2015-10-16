#include "list.h"

node* new_node(char n[], char a[]) {
	node* new = insert_front(0, n, a);
	return new;
}

int list_len(node* lfront) {
	/*Returns: Length of the linked list
	*/
	int n = 0;
	while(lfront->next) {
		n++;
		lfront = lfront->next;
	}
	return n+1;
}

void print_list(node* lfront) {
	if (lfront == NULL) {
		printf("\n");
		return;
	}
	while (lfront->next) {
		//printf("%d, ", lfront->data);
		lfront = lfront->next;
	}
	printf("\n");
}


node* insert_front(node *lfront, char n[], char a[]) {
	node *nfront = (node *)malloc(sizeof(node));
	strcpy(nfront->name, n);
	strcpy(nfront->artist, a);
	nfront->next = lfront;
	return nfront;
}

node* insert_lexic(node* lfront, char n[], char a[]) {
	/*Function: Inserts the node based on a lexicographic ordering
	Returns: Pointer to the new node */
	node *new = (node *)malloc(sizeof(node));
	strcpy(new->name, n);
	strcpy(new->artist, a);
	while(strcmp((lfront->next)->artist, new->artist) <= 0) {
		lfront = lfront->next;
	}
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

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
		return;
	}
	while (lfront) {
		printf("%s -- %s --> ", lfront->artist, lfront->name);
		lfront = lfront->next;
	}
	printf("NULL \n");
}

node* free_list(node* lfront) {
	while (lfront) {
		node* temp = lfront;
		lfront = lfront->next;
		lfront->prev = 0;
		free(temp);
	}
	return lfront;
}


node* insert_front(node *lfront, char n[], char a[]) {
	node *nfront = (node *)malloc(sizeof(node));
	strcpy(nfront->name, n);
	strcpy(nfront->artist, a);
	nfront->next = lfront;
	nfront->prev = 0;
	return nfront;
}

node* insert_lexic(node* lfront, char n[], char a[]) {
	/*Function: Inserts the node based on a lexicographic ordering
	Returns: Pointer to the new node */
	node *new = (node *)malloc(sizeof(node));
	strcpy(new->name, n);
	strcpy(new->artist, a);
	if (strcmp(lfront->artist, a) > 0) {
		new->next = lfront;
		new->prev = lfront->prev;
		lfront->prev = new;
		return new;
	}
	if (lfront->next == NULL) {
		new->next = 0;
		lfront->next = new;
		new->prev = lfront;
		new->next = 0;
		return new;
	}
	while(strcmp((lfront->next)->artist, a) < 0) {
		lfront = lfront->next;
		if (lfront->next == 0) {
			new->next = 0;
			lfront->next = new;
			new->prev = lfront;
			return new;
		}
	}
	while(strcmp((lfront->next)->name, n) < 0) {
		lfront = lfront->next;
		if (lfront->next == 0) {
			new->next = 0;
			lfront->next = new;
			new->prev = lfront;
			return new;
		}
	}
	new->next = lfront->next;
	(lfront->next)->prev = new;
	new->prev = lfront;
	lfront->next = new;
	return new;
}

node* randomn(node* lfront) { /*Returns pointer to random node*/
	int n = list_len(lfront);
	int s = rand() % n;
	int count = 1;
	while(count < s) {
		lfront = lfront->next;	
		count++;
	}
	return lfront;
}

void rem(node* n) {
	(n->prev)->next = n->next;
	(n->next)->prev = n->prev;
	free(n);
}

node* find_song(node* lfront, char songn[]) {
	while (lfront) {
		if (strcmp(lfront->name,songn) == 0) {
			return lfront;
		}
		lfront = lfront->next;
	}
	return NULL;
}

node* find_artist(node* lfront, char artistn[]) {
	while (lfront) {
		if (strcmp(lfront->artist,artistn) == 0) {
			return lfront;
		}
		lfront = lfront->next;
	}
	return NULL;
}

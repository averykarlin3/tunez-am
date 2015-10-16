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
		free(temp);
	}
	return lfront;
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
	if (strcmp(lfront->artist, a) > 0) {
		new->next = lfront;
		return new;
	}
	if (lfront->next == NULL) {
			new->next = NULL;
			lfront->next = new;
			return new;
	}
	while(strcmp((lfront->next)->artist, a) < 0) {
		lfront = lfront->next;
		if (lfront->next == NULL) {
			new->next = NULL;
			lfront->next = new;
			return new;
		}
	}
	while(strcmp((lfront->next)->name, n) < 0) {
		lfront = lfront->next;
		if (lfront->next == NULL) {
			new->next = NULL;
			lfront->next = new;
			return new;
		}
	}
	new->next = lfront->next;
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

void rem_next(node* prev) {
	node* del = prev->next;
	node* after = del->next;
	prev->next = after;
	free(del);
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

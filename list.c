#include "list.h"

node* new_node(int newData) {
	node* new = insert_front(0, newData);
	return new;
}

int list_len(node* lfront) {
	/*Returns: Length of the linked list
	*/
	int n = 0;
	while(lfront->next) {
		n++;
		lfront = lfront->next
	}
	return n+1;
}

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

node* insert_lexic(node* lfront, node* new) {
	/*Function: Inserts the node based on a lexicographic ordering
	Returns: Pointer to the new node */
	while(strcmp((lfront->next)->name, new->name) <= 0) {
		lfront = lfront->next;
	}
	new->next = lfront->next;
	lfront->next = new;
	return new;
}

node* random(node* lfront) { /*Returns pointer to random node*/
	int n = list_len(lfront);
	int s = rand() % n;
	int count = 1;
	while(count < s) {
		lfront = lfront->next;	
		count++;
	}
	return lfront;
}

node* free_list(node* lfront) {
	while (lfront) {
		node* temp = lfront;
		lfront = lfront->next;
		free(temp);
	}
	return lfront;
}

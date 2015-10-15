#include "list.h"

int main() {
	node *list = (node *)malloc(sizeof(node));
	list->data = 0;
	list->next = NULL;
	int i;
	for (i = 1; i < 10; i++) {
		list = insert_front(list, i);
	}
	printf("Adding initial elements and printing list:\n");
	print_list(list);
	printf("\n");
	printf("Freeing the list\n");
	free_list(list);
	return 0;
}

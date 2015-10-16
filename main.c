#include "list.h"

int main() {
	node *list = (node *)malloc(sizeof(node));
	strcpy(list->name,"singing in the rain");
	strcpy(list->artist,"john");
	list->next = NULL;
	return 0;
}

#include "list.h"

int main() {
	node *list = (node *)malloc(sizeof(node));
	strcpy(list->name,"singing in the rain");
	strcpy(list->artist,"john");
	list->next = NULL;
	insert_next(list, "tomato sauce", "joshua");
	insert_next(list, "potatoes", "joshua");
	insert_next(list, "quiet", "joshua");
	print_list(list);
	return 0;
}

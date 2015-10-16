#include "list.h"

int main() {
	node *list = (node *)malloc(sizeof(node));
	strcpy(list->name,"singing in the rain");
	strcpy(list->artist,"john");
	list->next = NULL;
	insert_lexic(list, "tomato sauce", "joshua");
	insert_lexic(list, "potatoes", "joshua");
	insert_lexic(list, "quiet", "joshua");
	printf("%d\n", list_len(list));
	print_list(list);
	return 0;
}

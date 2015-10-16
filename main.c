#include "list.h"

int main() {
	node* table[26];
	srand(time(NULL));
	node *list = (node *)malloc(sizeof(node));
	strcpy(list->name,"singing in the rain");
	strcpy(list->artist,"john");
	list->next = NULL;
	insert_lexic(list, "tomato sauce", "joshua");
	insert_lexic(list, "potatoes", "joshua");
	insert_lexic(list, "quiet", "joshua");
	printf("%d\n", list_len(list));
	print_list(list);
	print_list(find_song(list, "quiet"));
	print_list(find_artist(list, "joshua"));
	print_list(randomn(list));
	print_list(randomn(list));
	print_list(randomn(list));
	print_list(randomn(list));
	print_art(table, "john");
	print_let(table, 'p');
	return 0;
}

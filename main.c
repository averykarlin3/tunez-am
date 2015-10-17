#include "list.h"

int main() {
	node* table[26];
	int c = 0;
	while(c < 26) {
		table[c] = 0;
		c++;
	}
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
	printf("Random Node:\n");
	print_list(randomn(list));
	print_list(randomn(list));
	print_list(randomn(list));
	print_list(randomn(list));
	printf("Specific List Functions:\n");
	add_song(table, "john", "hello");
	add_song(table, "james", "goodbye");
	add_song(table, "john", "fish");
	add_song(table, "patrick", "star");
	add_song(table, "picard", "jean-luc");
	printf("Songs added if not 0:\n");
	printf("%p\n", table['p' - 'a']);
	print_art(table, "john");
	print_let(table, 'p');
	printf("Shuffle List:\n");
	return 0;
}

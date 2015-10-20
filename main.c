#include "list.h"
#include "library.h"

int main() {
	node* table[26];
	int c = 0;
	while(c < 26) {
		table[c] = 0;
		c++;
	}
	srand(time(NULL));
	printf("List function testing\n");
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
	printf("Specific Library Functions:\n");
	add_song(table, "hello", "john");
	add_song(table, "goodbye", "james");
	add_song(table, "fish", "john");
	add_song(table, "star", "patrick");
	add_song(table, "jean-luc", "picard");
	print_list(table['j'-'a']);
	printf("Songs added if not 0:\n");
	printf("%p\n", table['p' - 'a']);
	print_let(table, 'p');
	print_lib(table);
	print_art(table, "john");
	del_song(findlib_song(table, "hello"), table);
	del_song(table['j'-'a'], table);
	print_let(table, 'j');
	printf("Deleted hello\n");
	print_art(table, "john");
	printf("Shuffle List:\n");
	shuffle(table, 6);
	printf("Delete library\n");
	print_let(table, 'j');
	del_lib(table);
	print_lib(table);
	shuffle(table,2);
	return 0;
}

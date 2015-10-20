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
	printf("List function testing\n\n");
	node *list = (node *)malloc(sizeof(node));
	strcpy(list->name,"singing in the rain");
	strcpy(list->artist,"john");
	list->next = NULL;
	insert_lexic(list, "tomato sauce", "joshua");
	insert_lexic(list, "potatoes", "joshua");
	insert_lexic(list, "quiet", "joshua");
	printf("List length (after adding 4 nodes in order): %d\n\n", list_len(list));
	printf("Print list:\n");
	print_list(list);
	printf("\nFind song (quiet):\n");
	print_list(find_song(list, "quiet"));
	printf("\nFind artist (joshua):\n");
	print_list(find_artist(list, "joshua"));
	printf("\nRandom Nodes:\n");
	print_list(randomn(list));
	print_list(randomn(list));
	print_list(randomn(list));
	print_list(randomn(list));
	printf("\nSpecific Library Functions:\nAdding 5 songs:\n");
	add_song(table, "hello", "john");
	add_song(table, "goodbye", "james");
	add_song(table, "fish", "john");
	add_song(table, "star", "patrick");
	add_song(table, "jean-luc", "picard");
	printf("\nPrint letter function:\n");
	print_let(table, 'p');
	printf("\nPrint library function:\n");
	print_lib(table);
	printf("\nPrint artist (john) function:\n");
	print_art(table, "john");
	del_song(findlib_song(table, "hello"), table);
	printf("Deleted hello by john\n");
	print_art(table, "john");
	printf("\nShuffle List (6 songs):\n");
	shuffle(table, 6);
	printf("\nDelete library:\n");
	del_lib(table);
	print_lib(table);
	return 0;
}

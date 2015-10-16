#include "library.h"
#include "list.h"

void print_node(node* n) {
	printf("%s - %s\n", n->name, n->artist);
}

node* add_song(node* table[], char n[], char a[]) {
	return insert_lexic(table[a[0] - 'a'], n, a);
}

node* findlib_song(node* table[], char songn[]) {
	int i;
	node* temp;
	for (i = 0; i < 26; i++) {
		temp = find_song(table[i], songn);
		if (temp) {
			return temp;
		}
	}
	return NULL;
}

#include "library.h"
#include "list.h"

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

node* findlib_artist(node* table[], char artistn[]) {
	node* temp = table[artistn[0] - 'a'];
	return find_artist(temp, artistn);
}

void print_let(node* table[], char c) {
	print_list(table[c - 'a']);
}

void print_art(node* table[], char artistn[]) {
	node* fnode = table[artistn[0] - 'a'];
	while(find_artist(fnode, artistn)) {
		node* fnode = find_artist(fnode, artistn);
		print_node(fnode);
		fnode = fnode->next;
	}
}

void print_lib(node* table[]) {
	char c = 'a';
	while(c <= 'z') {
		print_let(table, c);
	}
}

node* del_song(node* song) {

}

void del_lib(node* table[]) {
	char c = 'a';
	while(c <= 'z') {
		print_let(table, c);
	}
}

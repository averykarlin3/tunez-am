#include "library.h"
#include "list.h"

node* add_song(node* table[], char n[], char a[]) {
	node* inserted = insert_lexic(table[a[0] - 'a'], n, a);
	if (table[a[0] - 'a'] == NULL) {
		table[a[0] - 'a'] = inserted;
	}
	else if (table[a[0] - 'a']->prev) {
		table[a[0] - 'a'] = inserted;
	}
	return inserted;
}

node* findlib_song(node* table[], char songn[]) {
	int i;
	node* temp;
	for (i = 0; i < 26; i++) {
		printf("%c\n",'a'+i);
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
	printf("%c artists: ",c);
	print_list(table[c - 'a']);
}

void print_art(node* table[], char artistn[]) {
	node* fnode = table[artistn[0] - 'a'];
	print_list(fnode);
	while(find_artist(fnode, artistn)) {
		//node* fnode = print_node(find_artist(fnode, artistn));
		//printf("hi2\n");
		if(!fnode) {
			return;
		}
		if (strcmp(fnode->artist, artistn) == 0) {
			print_node(fnode);
		}
		fnode = fnode->next;
	}
}

void print_lib(node* table[]) {
	char c = 'a';
	while(c <= 'z') {
		print_let(table, c);
		c++;
	}
}

void del_song(node* song) {
	rem(song);
}

void del_lib(node* table[]) {
	char c = 'a';
	while(c <= 'z') {
		free_list(table[c-'a']);
	}
}

void shuffle(node* table[], int n) {

}

// Your code here
#include <stdio.h>
#include <stdlib.h>
#include "listops.h"
int main(int argc, char** argv) {

	list_t* lst = make_empty_list();

	int i = 0, num; 
	while (i < 10) {
		scanf("%d", &num);
		lst = insert_in_order(lst, num, int_increasing);
		i++;
	}

	list_t* curr = lst; 
	while (curr->head) {
		printf("%d ", get_head(curr));
		curr = get_tail(curr);
	}

	return 0;
}
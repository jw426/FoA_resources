#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int studnum; 
	int mark; 
} pair_t; 
#define MAX_PAIRS 1000

void
sort_struct_array(pair_t A[], int n);
void print_data(pair_t pairs[], int n) ;
void
struct_swap(pair_t *p1, pair_t *p2);
int read_data(pair_t pairs[], int max);
int cmpfunc(const void* p1, const void* p2);


int main(int argc, char** argv) {

	pair_t pairs[MAX_PAIRS]; // [pair_t, pair_t,... , pair_t]
	int n = read_data(pairs, MAX_PAIRS);
	qsort(_, _, _, cmpfunc);
	print_data(pairs, n);

	return 0;
}

int cmpfunc(const void* p1, const void* p2) {

}

void print_data(pair_t pairs[], int n) {

	printf("studnum  mark");
	for (int i = 0; i < n; i++) {
		printf("%d%4d\n", pairs[i].studnum, pairs[i].mark);
	}
}

// reads in the data from the stdin 
// returns how many datasets are read in (studnum pairs)
int read_data(pair_t pairs[], int max) {

	printf("Enter as many as 1000 \"studnum mark\" pairs, ^D to end");
	int n = 0; 
	pair_t next; 
	while (n < max && scanf("%d %d", &next.studnum, &next.mark) == 2) {
		pairs[n++] = next; 		
	}

	printf("%d pairs read into arrays\n", n);
	return n;
}

/* sorts n elements of array A in increasing order (2, 3, 4, 5)
 * using insertion sort (insertionsort.c, Figure 7.4 PPSAA) */
void
sort_struct_array(pair_t A[], int n) {
    /* assume that A[0] to A[n-1] have valid values */

    for (int i = 1; i < n; i++) {
        /* swap A[i] left into correct position (increasing order). */
        for (int j = i - 1; j >= 0 && A[j].studnum > A[j + 1].studnum; j--) {
            /* not there yet */
            struct_swap(&A[j], &A[j + 1]);
        }
    }
}

/* exchange the values of the two variables indicated
 * by the arguments (insertionsort.c, Figure 7.4 PPSAA) */
void
struct_swap(pair_t *p1, pair_t *p2) {
    pair_t tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

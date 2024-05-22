// Your code here
#include <stdio.h>
#include <stdlib.h>
#include "arrayops.h"
/* maximum number of elements that can be stored in the array */
#define MAXVALS 1000

/* function prototypes */

int max_subarray(int[], int, int *, int *);

int
main(int argc, char *argv[]) {
    /* get the input */
    int A[MAXVALS];
    int n = read_int_array(A, MAXVALS);

    /* print the whole array */
    printf("original array:\n");
    print_int_array(A, n);

    /* get the result */
    int from, to;
    int sum = max_subarray(A, n, &from, &to);

    /* print the result */
    printf("maximum subarray:\n");
    print_int_array(A + from,
                    to - from + 1);   /* print A[from]..A[to] (inclusive) */
    printf("sum = %d\n", sum);

    return 0;
}

// kadane's 
int max_subarray(int A[], int n, int *from, int *to) {

    // base case: no elements 
    *from = 0, *to = -1; 
    if (n <= 0) return 0;

    // calculating the max subarray
    // O(n)
    int max_sum = 0;
    int sum = 0; 
    for (int end = 0; end < n; end++) {
        sum += A[j];

        if (sum < 0) {
            start = end + 1;
            sum = 0; 
        }

        if (sum > max_sum) {
            max_sum = sum; 
            *from = start; 
            *to = end; 
        }
    
    }

    return sum; 
}

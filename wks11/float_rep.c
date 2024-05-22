#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char **argv) {
	
	if (argc<2) {
		exit(EXIT_FAILURE);
	}
	float fval = atof(argv[1]);
	unsigned uval = *((unsigned *)(&fval));

	printf("\t");
    // bitshift by (from 31 ~ 0 inclusive)
	for (int i = 8 * sizeof(unsigned) - 1; i >= 0; i--) {
        // bitshift left and bitshift and (&)
		if (uval & (1<<i)) {
			printf("1");
		} else {
			printf("0");
		}
		if (i%8==0) {
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}
#include "pascal.h"
#include <math.h>


void parscal_triangle(int v) {
	int i, j;
	for (i = 0; i < v; i++) {
		// some spaces to start each line
		for (int k = (v - i)/2; k >=1 ; k--)
		{
			printf("      ");
		}
		if (i %2 > 0)
		{
			printf("   ");
		}
		for (j = 0; j <= i; j++) {
			printf("%5lld ", comb(i, j));
		}
		printf("\n\n");
	}
}

long long int comb(int n, int m) {
	if (n < m) return 0;
	return fact(n) / (fact(n - m) * fact(m));
}


int get_int(int min, int max) {
	int t;
	do {
		printf("Enter an positive integer between (%d, %d): ", min, max);
		int r = scanf("%d", &t);
		if (r < 1) t = 0;
	} while (t < min || t > max);

	return t;
}

long long int fact(int num) {
	long long int result = 1;
	for (int i = 1; i <= num; i++)
	{
		result *= i;
	}

	return result;
}

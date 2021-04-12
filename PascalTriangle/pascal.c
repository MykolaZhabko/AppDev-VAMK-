#include "pascal.h"
#include <math.h>


/**
 * @brief This function is for generating and printing Paskal triangle
 * @param[in] v - int value represents number of rows
 * /
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


/**
 *@brief Function to obtain number of (n,m) combinations.
 * The elements of the triangle can be filled as combinations (n = row, m - element in the row)
 * @param[in] n - int value, row number (starts from 0)
 * @param[in] m - int value, element in the row (starts from 0)
 * @return - long long int, number of combinations
 * /
long long int comb(int n, int m) {
	if (n < m) return 0;
	return fact(n) / (fact(n - m) * fact(m));
}


/**
 *@brief This function is asking user to enter the number which represents an amount of rows in Paskal triangle
 *in range from min to max
 *@param[in] min - int value, minimum positiv number, 0 is the lower limit
 *@param[in] max - int value, maximum positive number to choose.
 *@return - int value, choosen number
 */
int get_int(int min, int max) {
	int t;
	do {
		printf("Enter an positive integer between (%d, %d): ", min, max);
		int r = scanf("%d", &t);
		if (r < 1) t = 0;
	} while (t < min || t > max);

	return t;
}



/**
 *@brief Factorial calculation function
 *@param[in] num - int value, number factorial of which you want to obtain
 *@return - long long int, result of factorial calculations
 * /
long long int fact(int num) {i
	long long int result = 1;
	for (int i = 1; i <= num; i++)
	{
		result *= i;
	}

	return result;
}

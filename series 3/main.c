/*
   i ->  1     2     3     4     5
total =  4  +  7  +  4  +  7  +  4  + ... n terms
*/
#include <stdio.h>
int main(void) {
	int term, total, n, i;
	printf("\n\nPlease enter the number of terms: ");
	scanf("%d", &n);
	printf("\nPreparing and printing the series...\n");
	total = 0;
	term = 4;
	for (i = 1; i <= n; i++) {
		total = total + term;
		printf("\nSo the current value of the term = %d and total = %d...", term, total);
		term=term^3;
		//term=(total%11==0)?4:7;
		//term=(i%2==0)? 4 : 7;
		//if (term == 7) term = 4;
		//else term = 7;
	}
	printf("\n\nSo the final total of the series is %d...", total);
	printf("\nEnd of the program...");
}








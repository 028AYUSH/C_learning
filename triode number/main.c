#include <stdio.h>
int main(void) {
	int i, x, k, last_digit, trace[10], temp;
	for (x = 102; x <= 498; x++) {
		for (i = 0; i < 10; i++) trace[i] = 0;
		for (k = 1; k <= 3; k++) {
			temp = k * x;
			while (temp != 0) {
				last_digit = temp % 10;
				if (trace[last_digit] == 0) trace[last_digit] = 1;
				else break;
				temp = temp / 10;
			}
			if (temp != 0) break;
		}
		if (temp == 0) printf("\nTriode Number x = %d, 2*x = %d and 3*x = %d...", x, 2*x, 3*x);
	}

	printf("\n\nEnd of the program...");
}

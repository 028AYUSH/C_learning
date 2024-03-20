#include <stdio.h>


int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2;  i <n; i++) {
        if (n % i == 0) {
            return ;
        }
    }
    return ;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);


    for (int i = 2; i <= num; i++) {
        if (isPrime(i)) {
            int diff = num - i;
            if (isPrime(diff)) {
                printf("%d + %d = %d\n", i, diff, num);
               // break;
            }
        }
    }

    return 0;
}

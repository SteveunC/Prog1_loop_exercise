#include <stdio.h>

int main() {
    int n, i, k, prod, sum;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    for (k = 1; k <= n; k++) {
        sum = 0;
        
		for (i = 1; i <= 10; i++) {
            prod = i * k;
			sum = sum + prod;
			
            if (i == 10) {
                printf("%d\t = %d\n", prod, sum);
            } else {
                printf("%d\t", prod);
            }
        }

        k++;
    }

    return 0;
}


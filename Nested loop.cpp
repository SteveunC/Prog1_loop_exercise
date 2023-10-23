#include <stdio.h>

int main() {
    int n, i, k, prod;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    for (k = 1; k <= n; k++) {
        
		for (i = 1; i <= 10; i++) {
            		prod = i * k;
			
          		if (i == 10) {
               			 printf("%d\t = %d\n", prod, sum);
           		} 
			else {
              			  printf("%d\t", prod);
            }
        }
    }

    return 0;
}


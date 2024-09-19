#include <stdio.h>

int main() {
    int num, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Prime numbers up to %d are: ", num);
    for (i = 2; i <= num; ++i) {
        int is_prime = 1;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

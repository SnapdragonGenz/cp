#include <stdio.h>
int linear_search(int A[], int n, int k) {
    int i;
    for (i = 0; i < n; i++) {
        if (A[i] == k)
            return i;
    }
    return -1;
}
int main() {
    int A[], n, k, pos;   
    printf("In How many elements?\n");
    scanf("%d", &n);   
    for (int i = 0; i < n; i++) {
        printf("In A[%d] = ", i);
        scanf("%d", &A[i]);
    }
      printf("In key to search?\n");
    scanf("%d", &k);
     pos = linear_search(A, n, k);
     if (pos == -1)
        printf("%d is not found\n", k);
    else
        printf("%d is found at position %d\n", k, pos);
    return 0;
}

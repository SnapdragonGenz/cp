#include <stdio.h>
int main() {
    int n;
    printf("Enter an number: ");
    scanf("%d", &n);
    printf("The factorial is: %d\n",fact(n));
    return 0;
}
int fact(int n) {
    int r = 1;
    for (int i = 1; i <= n; ++i) {
        r =r * i;
}
    return r;
}

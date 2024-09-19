int main() {
    int n,  rev = 0, r;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n = n/10;
    }
    printf("The reverse of the number is: %d\n", rev);
    return 0;
}

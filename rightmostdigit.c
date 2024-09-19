#include<stdio.h>
int main() {
    int num, digit;
    printf("Enter an integer: ");
    scanf("%d", &num);
    digit = num % 10; // get the rightmost digit
    switch (digit) {
        case 0:
            printf("The rightmost digit is: Zero\n");
            break;
        case 1:
            printf("The rightmost digit is: One\n");
            break;
        case 2:
            printf("The rightmost digit is: Two\n");
            break;
        case 3:
            printf("The rightmost digit is: Three\n");
            break;
        case 4:
            printf("The rightmost digit is: Four\n");
            break;
        case 5:
            printf("The rightmost digit is: Five\n");
            break;
        case 6:
            printf("The rightmost digit is: Six\n");
            break;
        case 7:
            printf("The rightmost digit is: Seven\n");
            break;
        case 8:
            printf("The rightmost digit is: Eight\n");
            break;
        case 9:
            printf("The rightmost digit is: Nine\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }
    return 0;
}

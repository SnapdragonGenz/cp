#include <stdio.h>
void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swap_by_value function: a = %d, b = %d\n", a, b);
}
void swap_by_reference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After swap_by_reference function: *a = %d, *b = %d\n", *a, *b);
}
int main() {
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    // Call by value
    swap_by_value(x,y);
    // Call by reference
    swap_by_reference(&x, &y);
    return 0;
}

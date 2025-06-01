#include <stdio.h>

int main() {
    int x = 10;
    int *ptr;

    ptr = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Address stored in ptr: %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    *ptr = 20; // modifying x using pointer
    printf("New value of x after modification via pointer: %d\n", x);

    return 0;
}

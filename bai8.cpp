#include <stdio.h>

int gcc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1 = 48;
    int num2 = 18;

    int result = gcc(num1, num2);
    printf ("UCLN cua %d và %d là: %d\n", num1, num2, result);

    return 0;
}

#include <stdio.h>
#include <stdbool.h>

bool func(int num, int *result) {
    if (num <= 0) {
        return false;
    }

    int count = 0;
    while (num % 2 == 0) {
        num /= 2;
        count++;
    }

    if (num == 1) {
        *result = count;
        return true;
    } else {
        return false;
    }
}

int main() {
    int number;
    int result;
    printf("Input number: ");
    scanf("%d", &number);

    if (func(number, &result)) {
        printf("%d = 2^%d", number, result);
    } else {
        printf("%d is false", number);
    }

    return 0;
}


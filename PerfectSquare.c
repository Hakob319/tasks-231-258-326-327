#include <stdio.h>
#include <stdbool.h>

bool PerfectSquar(int num, int *result) {
    if (num <= 0) {
        return false;
    }
    
    for (int i = 1; i * i <= num; ++i) {
        if (i * i == num) {
            *result = i;
            return true;
        }
    }
    return false;
}

int main() {
    int number;
    int result;

    printf("Input number: ");
    scanf("%d", &number);

    if (PerfectSquar(number, &result)) {
        printf("We return true because %d * %d = %d and %d is an integer.\n", result, result, number, result);
    } else {
        printf("We return false because %d is not a perfect square.\n", number);
    }

    return 0;
}

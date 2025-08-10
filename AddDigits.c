#include <stdio.h>

int AddDigits(int num) {
    while (num >= 10) {
        int sum = 0;

        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        num = sum;
    }
    return num;
}

int main() {
    int number;
    int result;
    printf("Input number: ");
    scanf("%d", &number);

    result = AddDigits(number);

    printf("Your sum is %d\n", result);

    return 0;
}

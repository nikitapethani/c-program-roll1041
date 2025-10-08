#include <stdio.h>
int isPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return original == reversed;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num) && isPalindrome(num))
        printf("%d is a prime palindrome number.\n", num);
    else
        printf("%d is NOT a prime palindrome number.\n", num);
return 0;
}

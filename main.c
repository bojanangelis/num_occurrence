#include <stdio.h>

int numOccurrence(int n, int c) {
    if (n == 0) return 0;
    if (n % 10 == c && (n / 10) % 10 == c) return 2 + numOccurrence(n / 10, c);
    if (n % 10 == c) return 1 + numOccurrence(n / 10, c);
    else return numOccurrence(n / 10, c);
}

int main() {
    int n, c;
    scanf("%d %d", &n, &c);
    printf("%d\n", numOccurrence(n, c));
    return 0;
}

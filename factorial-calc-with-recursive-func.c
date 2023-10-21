#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0) {
        return 1; 
    } else {
        return n * factorial(n - 1); 
    }
}

int main() {
    int num;
    printf("Pozitif sayi giriniz: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Negatif sayilarin faktoriyeli yoktur.\n");
    } else {
        unsigned long long result = factorial(num);
        printf("%d! = %llu\n", num, result);
    }

    return 0;
}

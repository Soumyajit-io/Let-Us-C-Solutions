// intreger to binary using recursion
#include <stdio.h>

void toBinary(int n) {
    if (n == 0)
        return;
    
    toBinary(n / 2);           // Recursive call
    printf("%d", n % 2);       // Print remainder after recursive calls
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0)
        printf("0");
    else
        toBinary(number);

    printf("\n");
    return 0;
}

// intreger to binary
#include<stdio.h>
int main() {
    int n, i = 0;
    int bit[32]; // array to store bits 

    printf("Enter the Integer: ");
    scanf("%d", &n);

    while(n != 0) {
        bit[i] = n % 2; // store remainder
        n = n / 2;      // update n
        i++;
    }

    // Print the binary number in reverse 
    printf("Binary: ");
    for(int j = i - 1; j >= 0; j--) {
        printf("%d", bit[j]);
    }

    return 0;
}

#include <stdio.h>

int print(int n) {
    if (n == 0) return;  
    return n + print(n-1);      
}

int main() {
    int x = print(25);
    printf("%d",x);
}

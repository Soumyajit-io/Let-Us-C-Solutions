#include<stdio.h>
int main() {
    int n, sum =0;
    printf("Enter your number :");
    scanf("%d",&n);
    while(n>0){
        sum += n%10;
        n=n/10;


    }
    printf("%d",sum);
}
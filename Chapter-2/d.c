#include<stdio.h>
int main() {
    float t,v;
    printf("Enter time and velocity :");
    scanf("%f %f",&t,&v);
    float a = pow(v,0.16);
    printf("wind-chill factor %f",35.74+0.6215*t+(0.4275*t+35.75)*a);
}
//fehrenheit to centigrade
#include<stdio.h>
int main() {
    float f,c;
    printf("Enter temp in fehrenheit :");
    scanf("%f",&f);
    c= (f - 32) * 5/9;
    printf("The temperature in Centigrade is %f",c);

}
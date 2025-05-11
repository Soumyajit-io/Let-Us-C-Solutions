#include<stdio.h>
int main() {
    float l,b,r;
    printf("Enter length :");
    scanf("%f",&l);
    printf("Enter breadth :");
    scanf("%f",&b);
    printf("Enter radius :");
    scanf("%f",&r);
    
    printf("The perimeter of the rectangle is %f \n",2*(l+b));
    printf("The area of the circle is %f \n",3.14*r*r);
    printf("The circumferance of the circle is %f \n",2*3.14*r);
    
}
#include <stdio.h>
void main(){
    const float pi=3.14159;
    float area;
    int radius;
    printf("Enter the radius: ");
    scanf("%d",&radius);
    area = pi*radius*radius;
    printf("Area of the circle is %f \n ",area);
}
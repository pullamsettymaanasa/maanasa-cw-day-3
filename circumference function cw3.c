#include<stdio.h>
const float PI = 3.14;
float area(float radius);
float circum(float radius);
void main() 
{
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Area : %.4f\n", area(radius));
    printf("Circumference: %.3f\n", circum(radius));
    getchar();
}
float area(float radius) 
{
    return PI * radius * radius;
}
float circum(float radius) 
{
  return 2 * PI * radius;
}

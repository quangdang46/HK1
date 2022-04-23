// Preprocessor statements
#include <stdio.h>
#include <math.h>
#define PI 3.14159
// Global decleration
double getArea (double);
int main(){
    double radius;
    do{
        printf("Radius = ");
        scanf ("%lf", &radius);
    } while (radius < 0);
    printf("Area = %lf", getArea (radius));
    return 0;
}
// Function definition
double getArea (double r){
    if(r < 0)
        return -1;
    return 2.0 * PI * pow (r,2);
}
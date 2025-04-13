#include <stdio.h>
#include <math.h> //did not work M_PI
#define PI 3.141592653589793

// Function declarations with proper return type
float area_of_the_circle(float radius);
float volume_of_the_cylinder(float area, float height);

int main(){
    printf("Enter the radius and height\n");
    float radius, height;
    scanf("%f%f", &radius, &height);
    float area = area_of_the_circle(radius);
    printf("The area of the circle is %f\n", area);
    printf("The volume of the cylinder is %f\n", volume_of_the_cylinder(area,height));
    return 0;
}

float area_of_the_circle(float radius){
    float area = PI*pow(radius,2);
    return area;
}

float volume_of_the_cylinder(float area,float height){
    float volume = area*height;
    return volume;
}
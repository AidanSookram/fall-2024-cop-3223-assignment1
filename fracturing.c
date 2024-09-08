// Aidan Sookram
// 09/08/2024
// Assignment 1

#include <stdio.h>
#include <math.h>
#define PI 3.14159  // Defining pi which was given in assignment

// Calculating Distance! Inputs
double calculateDistance() {
    double x1, y1, x2, y2, distance;
    printf("Enter Point #1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter Point #2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2); 
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // Uses the formula
    // Output of distance formula
    printf("Point #1: x1 = %.2lf, y1 = %.2lf\n", x1, y1);
    printf("Point #2: x2 = %.2lf, y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);
    return distance;
}

// Uses distance to find perimeter
double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = PI * distance;  // Uses diameter to calc perimeter (2*pi*radius)

    // Output perimeter
    printf("The perimeter is %.2lf\n", perimeter);

    return perimeter;
}

// Calculating area!
double calculateArea() {
    double distance = calculateDistance();
    double radius = distance / 2.0;
    double area = PI * pow(radius, 2);  // Using radius to calculate area (pi * r^2)

    // Output area
    printf("The area is %.2lf\n", area);

    return area;
}

// Function to calculate the width
double calculateWidth() {
    double x1, x2, width;
    printf("Enter x-coordinates of Point #1 and #2 (x1 x2): ");
    scanf("%lf %lf", &x1, &x2);
    
    width = fabs(x2 - x1);
    
    // Output width
    printf("Point #1 entered: x1 = %.2lf\n", x1);
    printf("Point #2 entered: x2 = %.2lf\n", x2);
    printf("The width is %.2lf\n", width);
    
    return width;
}

// Function to calculate the height
double calculateHeight() {
    double y1, y2, height;
    printf("Enter y-coordinates of Point #1 and #2 (y1 y2): ");
    scanf("%lf %lf", &y1, &y2);
    
    height = fabs(y2 - y1);
    
    // Output height
    printf("Point #1 entered: y1 = %.2lf\n", y1);
    printf("Point #2 entered: y2 = %.2lf\n", y2);
    printf("The height is %.2lf\n", height);
    
    return height;
}

// Main function
int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

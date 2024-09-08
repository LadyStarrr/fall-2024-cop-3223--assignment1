//********************************************************
// fracturing.c
// Author: Estrella Marolla
// Date: 09/08/2024
// Class: COP 3223C, Professor Parra
// //********************************************************
#include <stdio.h>
#include <math.h>

#define PI 3.14159  // Define the constant value of Pi

// Function prototypes
double askForUserInput();
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc, char **argv) {
    // Calling the necessary functions
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

// Function to ask for user input
double askForUserInput() {
    double value;
    printf("Enter a value: ");
    scanf("%lf", &value);
    return value;
}

// Function to calculate distance between two points
double calculateDistance() {
    double x1, y1, x2, y2;
    
    printf("Enter coordinates for point #1:\n");
    x1 = askForUserInput();
    y1 = askForUserInput();
    
    printf("Enter coordinates for point #2:\n");
    x2 = askForUserInput();
    y2 = askForUserInput();

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);
    
    return distance;
}

// Function to calculate perimeter
double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = 2 * distance * PI;  // Example where you could use PI
    
    printf("The perimeter is %.2f\n", perimeter);
    return 2.5;  // Arbitrary difficulty score, adjust as needed
}

// Function to calculate area
double calculateArea() {
    double distance = calculateDistance();
    double area = pow(distance, 2);
    
    printf("The area is %.2f\n", area);
    return 3.0;  // Arbitrary difficulty score, adjust as needed
}

// Function to calculate width
double calculateWidth() {
    double x1, y1, x2, y2;

    printf("Enter coordinates for point #1:\n");
    x1 = askForUserInput();
    y1 = askForUserInput();
    
    printf("Enter coordinates for point #2:\n");
    x2 = askForUserInput();
    y2 = askForUserInput();

    double width = fabs(x2 - x1);
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The width is %.2f\n", width);
    
    return 2.0;  // Arbitrary difficulty score, adjust as needed
}

// Function to calculate height
double calculateHeight() {
    double x1, y1, x2, y2;

    printf("Enter coordinates for point #1:\n");
    x1 = askForUserInput();
    y1 = askForUserInput();
    
    printf("Enter coordinates for point #2:\n");
    x2 = askForUserInput();
    y2 = askForUserInput();

    double height = fabs(y2 - y1);
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The height is %.2f\n", height);
    
    return 2.0;  // Arbitrary difficulty score, adjust as needed
}
#include <stdio.h>
#include <math.h>  // Include math library

int main() {
    double num1 = 25.0, num2 = 4.0, angle = 45.0;

    // Square root
    printf("Square root of %.2f: %.2f\n", num1, sqrt(num1));

    // Power
    printf("%.2f raised to the power %.2f: %.2f\n", num1, num2, pow(num1, num2));

    // Absolute value
    printf("Absolute value of -%.2f: %.2f\n", num2, fabs(-num2));

    // Trigonometric functions (angle in radians)
    double radian_angle = angle * M_PI / 180.0;  // Convert degree to radian
    printf("Sine of %.2f degrees: %.2f\n", angle, sin(radian_angle));
    printf("Cosine of %.2f degrees: %.2f\n", angle, cos(radian_angle));
    printf("Tangent of %.2f degrees: %.2f\n", angle, tan(radian_angle));

    // Logarithmic functions
    printf("Natural logarithm of %.2f: %.2f\n", num1, log(num1));
    printf("Base-10 logarithm of %.2f: %.2f\n", num1, log10(num1));

    return 0;
}

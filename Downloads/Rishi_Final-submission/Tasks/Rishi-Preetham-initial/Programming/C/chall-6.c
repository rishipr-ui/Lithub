#include <stdio.h>
#include <math.h>

// Function to calculate the area, perimeter, and volume of a Cone
void calculateCone(float radius, float slantHeight, float height) {
    printf("Cone's area: %.2f\n", 3.14 * radius * (radius + slantHeight));
    printf("Perimeter is not applicable for a Cone.\n");
    printf("Cone's volume: %.2f\n", (1.0/3) * 3.14 * radius * radius * height);
}

// Function to calculate the area, perimeter, and volume of a Sphere
void calculateSphere(float radius) {
    printf("Sphere's area: %.2f\n", 4 * 3.14 * radius * radius);
    printf("Perimeter is not applicable for a Sphere.\n");
    printf("Sphere's volume: %.2f\n", (4.0/3) * 3.14 * radius * radius * radius);
}

// Function to calculate the area, perimeter, and volume of a Cuboid
void calculateCuboid(float length, float width, float height) {
    printf("Cuboid's area: %.2f\n", 2 * (length * width + width * height + height * length));
    printf("Cuboid's perimeter: %.2f\n", 4 * (length + width + height));
    printf("Cuboid's volume: %.2f\n", length * width * height);
}

int main() {
    float radius, slantHeight, height, length, width;

    // Input values for Cone
    printf("Enter radius, slant height, and height of the Cone: ");
    scanf("%f %f %f", &radius, &slantHeight, &height);
    calculateCone(radius, slantHeight, height);

    // Input values for Sphere
    printf("Enter radius of the Sphere: ");
    scanf("%f", &radius);
    calculateSphere(radius);

    // Input values for Cuboid
    printf("Enter length, width, and height of the Cuboid: ");
    scanf("%f %f %f", &length, &width, &height);
    calculateCuboid(length, width, height);
return 0;
}
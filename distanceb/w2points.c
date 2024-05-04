#include <stdio.h>
#include <math.h>

// Define a structure to represent a point in 2D space
struct Point {
    double x;
    double y;
};

// Recursive function to calculate the distance between two points
double calculateDistance(struct Point p1, struct Point p2) {
    if (p1.x == p2.x && p1.y == p2.y) {
        return 0; // Base case: distance between same points is 0
    } else {
        // Recursive step: calculate distance using distance formula
        double distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
        return distance;
    }
}

int main() {
    struct Point point1, point2;

    // Input the coordinates of the two points
    printf("Enter the coordinates of the first point (x y): ");
    scanf("%lf %lf", &point1.x, &point1.y);

    printf("Enter the coordinates of the second point (x y): ");
    scanf("%lf %lf", &point2.x, &point2.y);

    // Calculate and display the distance between the two points
    double distance = calculateDistance(point1, point2);
    printf("Distance between the two points: %lf", distance);

    return 0;
}

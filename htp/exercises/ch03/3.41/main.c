#include <stdio.h>
#include <math.h>

double area(double radius) {
  return M_PI * pow(radius, 2);
}

double circumference(double diameter) {
  return M_PI * diameter;
}

double diameter(double radius) {
  return radius * 2;
}

int main() {
  double radius, circleDiameter = 0;

  printf("Enter circle radius: ");
  scanf("%lf", &radius);

  circleDiameter = diameter(radius);

  printf("Area: %.2f\n", area(radius));
  printf("Circumference: %.2f\n", circumference(circleDiameter));
  printf("Diameter: %.2f\n", circleDiameter);
}

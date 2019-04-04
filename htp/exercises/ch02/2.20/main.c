#include <stdio.h>

// constant π,not using math.h
const double PI = 3.14159265359;

int local_pow(int base, int exp) {
  int original = base;

  for (int i = 1; i <= exp; i++) {
    base *= original;
  }

  return base;
}

int diameter(int radius) {
  return radius * 2;
}

int circumference(int diameter) {
  return PI * diameter;
}

int area(int radius) {
  return PI * local_pow(radius, 2);
}

int main() {
  int radius, c_diameter, c_circumference, c_area;

  puts("Enter radius of a circle: ");
  scanf("%d", &radius);

  c_diameter = diameter(radius);
  c_circumference = circumference(c_diameter);
  c_area = area(radius);

  printf("Circumference: %d\n", c_circumference);
  printf("Area: %d\n", c_area);
  printf("Diameter: %d\n", c_diameter);

  // in order to avoid using math.h
  // testing local_pow
  printf("Pow 2^4: %d\n", local_pow(2, 4));
}

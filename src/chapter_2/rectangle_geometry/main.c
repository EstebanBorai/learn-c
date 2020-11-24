#include <stdio.h>

//           <--     Width     -->
//         ^ +-------------------+
//         | |                   |
// Height  | |       Area        |
//         | |                   |
//         | |                   |
//         . +-----Perimeter-----+
//
// Formulas:
//
// Perimeter: 2(height + width)
// Area: height * width

float calc_perimeter(float height, float width) {
  return 2 * (height + width);
}

float calc_area(float height, float width) {
  return height * width;
}

int main() {
  float height;
  float width;

  puts("Enter rectangle's height: ");
  scanf("%f", &height);

  puts("Enter rectangle's width: ");
  scanf("%f", &width);

  printf("Perimeter is: %.2f\n", calc_perimeter(height, width));
  printf("Area is: %.2f\n", calc_area(height, width));
}

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

float rectangle_calc_perimeter(float height, float width) {
  return 2 * (height + width);
}

float rectangle_calc_area(float height, float width) {
  return height * width;
}

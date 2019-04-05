#include <stdio.h>

int main() {
  double gallons;
  double miles;

  while (gallons > -1) {
    printf("Enter gallons used (-1 to end): ");
    scanf("%lf", &gallons);

    if (gallons <= -1) {
      break;
    }

    printf("Enter miles driven: ");
    scanf("%lf", &miles);

    printf("The miles/gallon for this tank was: %lf\n", (miles/gallons));
  }
}

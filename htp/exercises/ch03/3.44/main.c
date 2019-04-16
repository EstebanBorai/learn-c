#include <stdio.h>
#include <math.h>

double scanDouble(char * message) {
  double promptAnswer;
  printf("%s", message);
  scanf("%lf", &promptAnswer);

  return promptAnswer;
}

double pythagoreanTheorem(double adjacentCatetus, double oppositeCatetus) {
  return (double) sqrt((pow((int) adjacentCatetus, 2) + (double) pow(oppositeCatetus, 2)));
}

int main() {
  double adjacentCatetus, hypotenuse, oppositeCatetus, foundHypotenuse;

  adjacentCatetus = scanDouble("Enter the Adjacent Catetus of your right triangle: ");
  oppositeCatetus = scanDouble("Enter he Opposite Catetus of your right triangle: ");
  hypotenuse = scanDouble("Enter the hypotenuse of your triangle: ");

  foundHypotenuse = pythagoreanTheorem(adjacentCatetus, oppositeCatetus);

  printf("Found Hypotenuse: %lf\nGiven Hypotenuse: %lf\n\n", foundHypotenuse, hypotenuse);

  // use integers instead of double for comparisson
  // this is not an exact value
  if ((int) hypotenuse == (int) foundHypotenuse) {
    puts("This is a right triangle");
  } else {
    puts("This is not a right triangle");
  }
}

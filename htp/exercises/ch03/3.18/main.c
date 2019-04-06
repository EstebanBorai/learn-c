#include <stdio.h>

double comission(double grossSales) {
  return grossSales * 0.09;
}

int main() {
  const int BASE_SALARY = 200;
  double grossSales;

  while (grossSales > -1) {
    printf("Enter sales in dollars (-1 to end): ");
    scanf("%lf", &grossSales);

    if (grossSales <= -1) {
      break;
    }

    printf("Salary is $%.2f\n", (comission(grossSales) + BASE_SALARY));
  }
}

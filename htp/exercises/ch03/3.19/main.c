#include <stdio.h>

double interest(double principal, double rate, int days) {
  // interest = principal * rate * days / 365
  return (principal * rate) * (days / 365);
}

int main() {
  double principal;
  double rate;
  int days;

  while (principal > -1) {
    printf("Enter loan principal (-1 to end): ");
    scanf("%lf", &principal);

    if (principal < 0) {
      break;
    }

    printf("Enter interest rate: ");
    scanf("%lf", &rate);

    printf("Enter term of loan in days: ");
    scanf("%d", &days);

    printf("The interest charge is: $%.2f\n", interest(principal, rate, days));
  }
}

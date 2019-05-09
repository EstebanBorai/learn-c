#include <stdio.h>

double calculateCharges(double hours) {
  double const FEE = 2.00, ADDITIONAL = 0.50, MAX_FEE = 10.00;

  if (hours > 3) {
    if (hours <= 24) {
      double base = (FEE * 3);
      double remainingTime = hours - 3;
      double additionalCharge = (remainingTime * ADDITIONAL);

      return base + additionalCharge;
    } else {
      return MAX_FEE;
    }
  } else {
    return (FEE * hours);
  }
}

int main(void) {
  double totalHours = 0, totalCharges = 0;
  double const customerTimes[4] = {1.5, 4.0, 24.0, 29.5};

  printf("%s\t%s\t%s\n", "Car", "Hours", "Charge");

  for (int customer = 0; customer < 4; customer++) {
    double customerTime = customerTimes[customer], 
      customerCharge = calculateCharges(customerTime);

    totalHours += customerTime;
    totalCharges += customerCharge;
  
    printf("%d\t%.2f\t%.2f\n", (customer + 1), customerTime, customerCharge);
  }

  printf("%s\t%.2f\t%.2f\n", "TOTAL", totalHours, totalCharges);
}

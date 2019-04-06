#include <stdio.h>

double calculateSalary(double hourlyRate, int hoursWorked) {
  const int BASE_HOURS = 40;
  const double EXTRA_HOUR_PAYMENT = (hourlyRate * 0.5) + hourlyRate;

  if (hoursWorked > BASE_HOURS) {
    int diff = hoursWorked - BASE_HOURS;
    double base = BASE_HOURS * hourlyRate,
      extras = diff * EXTRA_HOUR_PAYMENT;
      
    return (base + extras);
  } else {
    return (hoursWorked * hourlyRate);
  }
}

int main() {
  double hourlyRate;
  int hoursWorked;

  while (hoursWorked > -1) {
    printf("Enter # of hours worked (-1 to end): ");
    scanf("%d", &hoursWorked);

    if (hoursWorked == -1) {
      break;
    }

    printf("Enter hourly rate of the worker ($00.00): ");
    scanf("%lf", &hourlyRate);

    printf("Salary is: %.2f\n", calculateSalary(hourlyRate, hoursWorked));
  }
}

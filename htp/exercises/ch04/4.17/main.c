#include <stdio.h>

int * creditLimit(int accountNumber, double baseCreditLimit, double currentBalance) {
  static int customerData[3];

  int newCreditLimit = (int) baseCreditLimit / 2;
  customerData[0] = accountNumber;
  customerData[1] = newCreditLimit;
  customerData[2] = currentBalance > newCreditLimit ? 1 : 0;

  return customerData;
}

void printCustomerInfo() {
  int accountNumber;
  double baseCreditLimit, currentBalance;

  printf("%s", "Enter account number: ");
  scanf("%d", &accountNumber);

  printf("%s", "Enter credit limit: ");
  scanf("%lf", &baseCreditLimit);

  printf("%s", "Enter current balance: ");
  scanf("%lf", &currentBalance);

  int * customerData = creditLimit(accountNumber, baseCreditLimit, currentBalance);
  printf("Account Number: %d\nBase Credit Limit: %d\nExceeded Current Balance: %s\n", 
    customerData[0], customerData[1], customerData[2] == 0 ? "No" : "Yes");
}

int main() {
  printCustomerInfo();
}

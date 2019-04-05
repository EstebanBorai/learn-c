#include <stdio.h>

void printAccount(int accountNumber, double balance, double charge, double credits, double creditLimit) {
  printf("Account:\t%d\n", accountNumber);
  printf("Credit limit:\t%lf\n", creditLimit);

  double remainingBalance = credits > 0 ? ((charge - credits) + balance) : (balance - charge);
  printf("Balance:\t%lf\n", remainingBalance);

  if (remainingBalance > creditLimit) {
    puts("Credit Limit Exceeded");
  }
}

double promptDouble(char *message) {
  double response;

  printf("%s: ", message);
  scanf("%lf", &response);

  return response;
}

int main() {
  int accountNumber;
  double balance;
  double charge;
  double credits;
  double creditLimit;

  while (accountNumber > -1) {
    printf("Enter account number (-1 to end): ");
    scanf("%d", &accountNumber);

    if (accountNumber <= -1) {
      break;
    }

    balance = promptDouble("Enter beginning balance");
    charge = promptDouble("Enter total charges");
    credits = promptDouble("Enter total credits");
    creditLimit = promptDouble("Enter credit limit");

    printAccount(accountNumber, balance, charge, credits, creditLimit);
  }
}

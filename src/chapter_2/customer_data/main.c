#include <stdio.h>

int main() {
  char name[32];
  char email[254];

  int day_ob;
  int month_ob;
  int year_ob;

  printf("Enter your name: ");
  scanf("%s", name);

  printf("Enter your email: ");
  scanf("%s", email);

  prinf("Enter your birthdate day: ");
  scanf("%d", &day_ob);

  prinf("Enter your birthdate month [Must be the number: January = 1]: ");
  scanf("%d", &month_ob);

  prinf("Enter your birthdate year: ");
  scanf("%d", &year_ob);

  printf("Name: %s\n", name);
  printf("Email: %s\n", email);
  printf("Date of Birth: %d-%d-%d", day_ob, month_ob, year_ob);
}

#include <stdio.h>

int main()
{
  unsigned int x;

  for (x = 1; x <= 10; ++x) {
    if (x == 5) {
      continue;
    }

    // format specifier u for unsigned integers
    printf("%u", x);
  }

  puts("\nUsed continue to skip printing value 5");
}

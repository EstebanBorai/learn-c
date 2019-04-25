#include <stdio.h>

int main() {
  double items[5] = {2.98, 4.50, 9.98, 4.49, 6.87};
  int itemId;
  double total = 0;

  puts("Enter item id followed by an space and a quantity number in order to get a total of sells.");
  puts("Enter Ctrl+D (Unix Based Systems) or Ctrl+Z (Windows Systems) to end.");
  do {
    int quantity;
    printf("Enter quantity for %d: ", itemId);
    scanf("%d", &quantity);

    if (itemId < 1 || itemId > 5) {
      printf("Value %d is not valid, enter a value between 1 and 5.\nBreaking.\n", itemId);
      break;
    }

    // FIXME: First value is always 0 
    total += (quantity * items[itemId - 1]);
  } while((itemId = (int) getchar()) != EOF);
}

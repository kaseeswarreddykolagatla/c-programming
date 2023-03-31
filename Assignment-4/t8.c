#include <stdio.h>

union number {
  int i;
  float f;
};

int main() {
  union number data;
  char choice;

  printf("Enter a value: ");
  scanf(" %c", &choice);

  if (choice == 'i') {
    printf("Enter an integer value: ");
    scanf("%d", &data.i);
    printf("You entered: %d\n", data.i);
  }
  else if (choice == 'f') {
    printf("Enter a float value: ");
    scanf("%f", &data.f);
    printf("You entered: %f\n", data.f);
  }
  else {
    printf("Invalid choice!\n");
  }
  printf("\nregistration number:192211216");
  return 0;
}

#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  if (n == 0) {
    printf("nulo\n");
  } else if (n > 0) {
    printf("positivo\n");
  } else {
    printf("negativo\n");
  }
  return 0;
}
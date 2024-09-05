#include <stdio.h>

int main(void) {
  int n1, n2, soma;
  scanf("%d", &n1);
  scanf("%d", &n2);
  
  soma = n1 + n2;

  if (soma % 2 == 0) {
    printf("Bino");
  } else {
    printf("Cino");
  } 
  return 0;
}
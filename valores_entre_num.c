#include <stdio.h>

int main(void) {
  int n1, n2;
  scanf("%d", &n1);
  scanf("%d", &n2);

  if (n1 < n2) {
  for (int i = n1; i <= n2; i++) {
    printf("%d ", i);
  }} else {
    for (int i = n2; i <= n1; i++)
      printf("%d ", i);
  }
  return 0;
}
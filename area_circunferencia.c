#include <stdio.h>

int main() {
  double r, area;
  scanf("%lf", &r);
  
  area = 3.1416 * (r * r);
  
  printf("%.2lf\n", area);
return 0;
}